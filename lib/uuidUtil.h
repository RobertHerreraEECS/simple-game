//
// Created by plascenciaj on 10/10/20.
//

#ifndef SIMPLE_GAME_UUIDUTIL_H
#define SIMPLE_GAME_UUIDUTIL_H

#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_io.hpp>         // streaming operators etc.

class uuidUtil {
public:
    static boost::uuids::uuid getUUID();
};


#endif //SIMPLE_GAME_UUIDUTIL_H
