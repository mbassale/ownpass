//
// Created by Marco Bassaletti on 22-02-21.
//

#ifndef OWNPASS_PASSWORD_H
#define OWNPASS_PASSWORD_H

#include <boost/uuid/uuid.hpp>
#include "IdGenerator.h"
#include "Group.h"

namespace OwnPass {
	class Group;

	class Password {
	public:
		Password(const Password& other)
				:group{ other.group }, id{ other.id }, username{ other.username }, password{ other.password },
				 url{ other.url }, description{ other.description } { }

		Password(Password&& other)
				:group{ other.group } { *this = std::move(other); }

		Password(const Group& group, const boost::uuids::uuid& id, const std::string& username, const std::string& password,
				const std::string& url, const std::string& description)
				:group{ group }, id{ id }, username{ username }, password{ password }, url{ url },
				 description{ description } { }

		~Password() = default;

		Password& operator=(const Password& other)
		{
			if (this == &other) return *this;
			id = other.id;
			username = other.username;
			password = other.password;
			url = other.url;
			description = other.description;
			return *this;
		}

		Password& operator=(Password&& other)
		{
			id = other.id;
			username = std::move(other.username);
			password = std::move(other.password);
			url = std::move(other.url);
			description = std::move(other.description);
			return *this;
		}

		[[nodiscard]] const boost::uuids::uuid get_id() const { return id; }

		[[nodiscard]] const std::string& get_username() const { return username; }

		Password& set_username(const std::string& new_username)
		{
			username = new_username;
			return *this;
		}

		[[nodiscard]] const std::string& get_password() const { return password; }

		Password& set_password(const std::string& new_password)
		{
			password = new_password;
			return *this;
		}

		[[nodiscard]] const std::string& get_url() const { return url; }

		Password& set_url(const std::string& new_url)
		{
			url = new_url;
			return *this;
		}

		[[nodiscard]] const std::string& get_description() const { return description; }

		Password& set_description(const std::string& new_description)
		{
			description = new_description;
			return *this;
		}

		[[nodiscard]] const Group& get_group() const { return group; }

		bool operator==(const Password& other) const { return id == other.id; }

	private:
		const Group& group;
		boost::uuids::uuid id;
		std::string username;
		std::string password;
		std::string url;
		std::string description;
	};

	class PasswordFactory {
	private:
		PasswordFactory() = default;
		~PasswordFactory() = default;
	public:
		static Password make(const Group& group, const std::string& username, const std::string& pass,
				const std::string& url = std::string(), const std::string& description = std::string())
		{
			boost::uuids::uuid password_id = IdGenerator::make();
			return (Password){ group, password_id, username, pass, url, description };
		}

		static Password make(const Group& group, const boost::uuids::uuid& id, const std::string& username,
				const std::string& pass, const std::string& url = std::string(),
				const std::string& description = std::string())
		{
			return (Password){ group, id, username, pass, url, description };
		}
	};
}

#endif //OWNPASS_PASSWORD_H
