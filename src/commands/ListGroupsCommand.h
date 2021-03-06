//
// Created by Marco Bassaletti on 27-03-21.
//

#ifndef OWNPASS_LISTGROUPSCOMMAND_H
#define OWNPASS_LISTGROUPSCOMMAND_H

#include "../NSPass.h"
#include "ListCommand.h"

namespace NSPass::Commands {
	class ListGroupsCommand : public ListCommand {
	public:
		static constexpr auto Name = "list-groups";
		explicit ListGroupsCommand(NSPass::Application& app, GroupType group_type = GroupType::Site,
				Format format = Format::STDOUT, const Filter& filter = EmptyFilter)
				:ListCommand(app, format, filter), group_type{ group_type } { };
		~ListGroupsCommand() override = default;

		std::string_view get_name() override { return Name; }
		bool requires_master_password() override { return true; }
		void execute() override;
		void undo() override;
	protected:
		GroupType group_type;
		std::string get_group_column_header();
	};
}

#endif //OWNPASS_LISTGROUPSCOMMAND_H
