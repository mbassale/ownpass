//
// Created by Marco Bassaletti on 27-03-21.
//

#ifndef OWNPASS_LISTSITESCOMMAND_H
#define OWNPASS_LISTSITESCOMMAND_H

#include "../OwnPass.h"
#include "Command.h"

namespace OwnPass::Commands {
	class ListSitesCommand : public Command {
	public:
		static constexpr auto Name = "list-sites";
		explicit ListSitesCommand(OwnPass::Application& app)
				:Command(app) { };
		~ListSitesCommand() override = default;

		std::string_view get_name() override { return Name; }
		bool requires_master_password() override { return true; }
		void execute() override;
		void undo() override;
	};
}

#endif //OWNPASS_LISTSITESCOMMAND_H
