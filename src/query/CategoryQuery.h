//
// Created by Marco Bassaletti on 30-03-21.
//

#ifndef OWNPASS_CATEGORYQUERY_H
#define OWNPASS_CATEGORYQUERY_H

#include "../OwnPass.h"
#include "../Category.h"
#include "Query.h"

namespace OwnPass::Query {
	class CategoryQuery : public Query<OwnPass::CategoryPtr> {
	public:
		CategoryQuery(Storage::Storage& storage, std::string_view search)
				:Query<OwnPass::CategoryPtr>(storage), search{ search } { }
		std::vector<OwnPass::CategoryPtr> execute() override;
	protected:
		std::string search;
	};
}

#endif //OWNPASS_CATEGORYQUERY_H
