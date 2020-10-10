//
// Created by plascenciaj on 10/10/20.
//

#include "uuidUtil.h"
#include <boost/uuid/uuid_generators.hpp> // generators

static boost::uuids::uuid getUUID()
{
    return boost::uuids::random_generator()();
}
