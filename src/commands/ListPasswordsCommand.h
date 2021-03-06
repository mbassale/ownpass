//
// Created by Marco Bassaletti on 27-03-21.
//

#ifndef OWNPASS_LISTPASSWORDSCOMMAND_H
#define OWNPASS_LISTPASSWORDSCOMMAND_H

#include "../NSPass.h"
#include "ListCommand.h"

namespace NSPass::Commands {
	class ListPasswordsCommand : public ListCommand {
	public:
		static constexpr auto Name = "list-passwords";
		explicit ListPasswordsCommand(NSPass::Application& app, Format format = Format::STDOUT,
				const Filter& filter = EmptyFilter)
				:ListCommand(app, format, filter) { };
		~ListPasswordsCommand() override = default;

		std::string_view get_name() override { return Name; }
		bool requires_master_password() override { return true; }
		void execute() override;
		void undo() override;
	};
}

#endif //OWNPASS_LISTPASSWORDSCOMMAND_H
