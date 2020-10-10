//
// Created by plascenciaj on 10/10/20.
//

#include "uuidUtil.h"
#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/uuid/uuid_io.hpp>         // streaming operators etc.

boost::uuids::uuid static getUUID()
{
    return boost::uuids::random_generator()();
}