//
// Created by Marco Bassaletti on 17-03-21.
//

#ifndef OWNPASS_VERSIONCOMMAND_H
#define OWNPASS_VERSIONCOMMAND_H

#include <string>
#include "../Application.h"
#include "Command.h"

namespace NSPass::Commands {
	class VersionCommand : public Command {
	public:
		static constexpr auto Name = "version";
		explicit VersionCommand(NSPass::Application& app) : Command(app) {};
		~VersionCommand() override = default;

		std::string_view get_name() override { return Name; }
		bool requires_master_password() override { return false; }
		void execute() override;
		void undo() override;
	};
}

#endif //OWNPASS_VERSIONCOMMAND_H
