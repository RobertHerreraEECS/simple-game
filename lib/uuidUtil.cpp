//
// Created by plascenciaj on 10/10/20.
//

#include "uuidUtil.h"
#include <boost/uuid/uuid_generators.hpp> // generators

std::string getUUID()
{
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    std::string uuidStr = to_string(uuid);
    return uuidStr;
}