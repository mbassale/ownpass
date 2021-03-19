//
// Created by Marco Bassaletti on 24-02-21.
//

#ifndef OWNPASS_CATEGORY_H
#define OWNPASS_CATEGORY_H

#include <memory>
#include <list>
#include <optional>
#include <boost/uuid/uuid.hpp>
#include "IdGenerator.h"
#include "Group.h"

namespace OwnPass {
	class Category {
	public:
		const char* DefaultName = "Default";

		Category()
				:id{ boost::uuids::random_generator()() }, name{ DefaultName } { }

		Category(const Category& other)
				:id{ other.id }, name{ other.name }, groups{ other.groups } { }

		Category(Category&& other) noexcept
				:id{} { *this = std::move(other); }

		explicit Category(std::string_view name)
				:id{ IdGenerator::make() }, name{ name } { }

		Category(boost::uuids::uuid& id, std::string_view name, std::list<Group>& groups)
				:id{ id }, name{ name }, groups{ groups } { }

		~Category() = default;

		Category& operator=(const Category& other)
		{
			if (this == &other) return *this;
			id = other.id;
			name = other.name;
			groups = other.groups;
			return *this;
		}

		Category& operator=(Category&& other) noexcept
		{
			id = other.id;
			name = std::move(other.name);
			groups.clear();
			groups = std::move(other.groups);
			return *this;
		}

		[[nodiscard]] const boost::uuids::uuid& get_id() const { return id; }

		[[nodiscard]] std::string_view get_name() const { return name; }

		Category& set_name(std::string_view new_name)
		{
			name = new_name;
			return *this;
		}

		[[nodiscard]] const std::list<Group>& get_groups() const { return groups; }

		[[nodiscard]] std::list<Group>& get_groups() { return groups; }

		Category& add_group(Group& group);

		std::optional<Group> find_group(std::string_view group_name);

		std::list<std::reference_wrapper<Group>> find_groups(std::string_view search);

		Category& save_group(Group& group);

		Category& remove_group(Group& group);

		Category& remove_group(std::string_view group_name);

		bool operator==(const Category& other) const { return id == other.id; }

	private:
		boost::uuids::uuid id;
		std::string name;
		std::list<Group> groups;
	};

	typedef std::reference_wrapper<Category> CategoryRef;
}

#endif //OWNPASS_CATEGORY_H
