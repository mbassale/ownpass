//
// Created by Marco Bassaletti on 01-04-21.
//
#include "../NSPass.h"
#include <boost/tokenizer.hpp>
#include "ImportLastPassCommand.h"

namespace NSPass::Commands {
	using namespace std;

	void ImportLastPassCommand::execute()
	{
		ifstream infile(filename);
		if (!infile.is_open()) {
			ostringstream error_message;
			error_message << "Cannot open filename: " << filename;
			throw ApplicationException(error_message.str());
		}
		string line_str;
		size_t line_count = 0;
		size_t password_count = 0;
		size_t error_count = 0;
		std::cout << "Import start." << std::endl;
		while (getline(infile, line_str)) {
			if (line_count++ == 0) continue;
			boost::tokenizer<boost::escaped_list_separator<char>> tok(line_str);
			vector<string> row_data;
			for (auto it = tok.begin(); it != tok.end(); it++) {
				row_data.push_back(*it);
			}
			if (row_data.size() >= 6) {
				try {
					ImportItem item;
					item.url = row_data[0];
					item.username = row_data[1];
					item.password = row_data[2];
					item.extra = row_data[3];
					item.site_name = row_data[4];
					item.category_name = row_data[5];
					boost::trim(item.site_name);
					boost::trim(item.site_name);
					import_item(item);
					password_count++;
				}
				catch (std::runtime_error& err) {
					errors.emplace_back(line_count, err.what());
					error_count++;
				}
			}
		}
		get_storage().flush();

		std::cout << "Import end." << std::endl;
		std::cout << "Summary:" << std::endl;
		std::cout << "Line Count: " << line_count << std::endl;
		std::cout << "Password Count: " << password_count << std::endl;
		std::cout << "Error Count: " << error_count << std::endl;
		std::cout << "Errors:" << std::endl;
		for (auto& err : errors) {
			std::cout << "Error Line #" << err.line << ": " << err.error << std::endl;
		}
	}

	void ImportLastPassCommand::undo()
	{
		throw CannotUndoException();
	}

	void ImportLastPassCommand::import_item(const ImportLastPassCommand::ImportItem& item)
	{
		auto category = find_or_create_category(item.category_name);
		if (!category) return;
		auto group = find_or_create_group(category, GroupType::Site, item.site_name);
		if (!group) return;
		auto password = create_password(group, item.username, item.password, item.url);
		if (!password) return;
		save_imported_category(category);
		save_imported_group(group);
		save_imported_password(password);
	}

	CategoryPtr ImportLastPassCommand::find_or_create_category(std::string_view category_name)
	{
		CategoryPtr category;
		if (category_name.empty()) {
			category = app.get_storage().find_category(Category::DefaultName);
			if (!category) {
				category = CategoryFactory::make(Category::DefaultName);
				get_storage().save_category(category);
			}
		}
		else {
			category = app.get_storage().find_category(category_name);
			if (!category) {
				category = CategoryFactory::make(category_name);
				get_storage().save_category(category);
			}
		}
		return category;
	}

	GroupPtr ImportLastPassCommand::find_or_create_group(const CategoryPtr& category, GroupType group_type,
			std::string_view group_name)
	{
		GroupPtr group = category->find_group(group_name);
		if (!group) {
			group = GroupFactory::make_site(group_name);
			category->add_group(group);
		}
		return group;
	}

	PasswordPtr ImportLastPassCommand::create_password(const GroupPtr& group, std::string_view username,
			std::string_view password, std::string_view url)
	{
		auto password_obj = PasswordFactory::make(username, SecureString::FromPlainText(username, password), url);
		group->add_password(password_obj);
		return password_obj;
	}

	void ImportLastPassCommand::save_imported_category(const CategoryPtr& category)
	{
		auto found_count = std::count_if(imported_categories.begin(), imported_categories.end(),
				[&category](const CategoryWeakPtr& existing_category) {
					if (auto ptr = existing_category.lock(); ptr) {
						return ptr->get_id() == category->get_id();
					}
					return false;
				});
		if (!found_count) {
			imported_categories.push_back(category);
		}
	}

	void ImportLastPassCommand::save_imported_group(const GroupPtr& group)
	{
		auto found_count = std::count_if(imported_groups.begin(), imported_groups.end(),
				[&group](const GroupWeakPtr& existing_group) {
					if (auto ptr = existing_group.lock(); ptr) {
						return ptr->get_id() == group->get_id();
					}
					return false;
				});
		if (!found_count) {
			imported_groups.push_back(group);
		}
	}

	void ImportLastPassCommand::save_imported_password(const PasswordPtr& password)
	{
		auto found_count = std::count_if(imported_passwords.begin(), imported_passwords.end(),
				[&password](const PasswordWeakPtr& existing_password) {
					if (auto ptr = existing_password.lock(); ptr) {
						return ptr->get_id() == password->get_id();
					}
					return false;
				});
		if (!found_count) {
			imported_passwords.push_back(password);
		}
	}
}
