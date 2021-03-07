//
// Created by Marco Bassaletti on 05-03-21.
//

#ifndef OWNPASS_STORAGE_H
#define OWNPASS_STORAGE_H

#include <memory>
#include <string>
#include <list>
#include "../Category.h"
#include "../Group.h"
#include "../Password.h"

namespace OwnPass::DB {

    class Storage {
    public:
        Storage() = default;
        virtual ~Storage() = 0;

        virtual void purge() = 0;

        virtual std::list<OwnPass::Category> list_categories() = 0;
        virtual Category& save_category(Category& category) = 0;
        virtual Category& find_category(std::string &search) = 0;

        virtual std::list<OwnPass::Group> list_groups(Category& category) = 0;
        virtual Group& save_group(Group& group) = 0;
        virtual Group& find_group(std::string& search) = 0;
    };

    class StorageFactory {
    public:
        static std::shared_ptr<Storage> make();
    private:
        StorageFactory() = default;
    };
}

#endif //OWNPASS_STORAGE_H