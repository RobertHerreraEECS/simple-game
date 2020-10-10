//
// Created by plascenciaj on 10/10/20.
//

#ifndef SIMPLE_GAME_SPRITE_H
#define SIMPLE_GAME_SPRITE_H

#include <tuple>
#include <boost/uuid/uuid.hpp>

class Sprite {
private:
    boost::uuids::uuid  spriteId;
    int row;
    int col;
public:
    Sprite();
    Sprite(boost::uuids::uuid spriteId);
    Sprite(int row, int col);
    void setRow(int row);
    void setCol(int col);
    void setCoor(int row, int col);
    boost::uuids::uuid getId();
    int getRow();
    int getCol();
   // std::tuple<int, int> getCoor();
};


#endif //SIMPLE_GAME_SPRITE_H
