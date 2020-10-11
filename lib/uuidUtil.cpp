//
// Created by plascenciaj on 10/10/20.
//

#include "uuidUtil.h"
#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/lexical_cast.hpp>

std::string getUUID()
{
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    std::string uuidStr = boost::lexical_cast<std::string>(uuid);
    return uuidStr;
}
