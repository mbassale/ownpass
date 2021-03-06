//
// Created by Marco Bassaletti on 07-03-21.
//

#ifndef OWNPASS_GROUPSERIALIZER_H
#define OWNPASS_GROUPSERIALIZER_H

#include <list>
#include "../../Group.h"
#include "JsonSerializer.h"

namespace NSPass::Storage::Serializer {
	class GroupSerializer : public JsonSerializer<GroupPtr> {
	public:
		GroupSerializer() = default;
		~GroupSerializer() = default;

		boost::json::object serialize(const GroupPtr& obj) override;
		boost::json::array serialize(const std::vector<GroupPtr>& objs) override;

		GroupPtr deserialize(boost::json::object& obj) override;
		std::vector<GroupPtr> deserialize(boost::json::array& objs) override;
	};
}

#endif //OWNPASS_GROUPSERIALIZER_H
