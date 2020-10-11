//
// Created by plascenciaj on 10/10/20.
//

#ifndef SIMPLE_GAME_SPRITE_H
#define SIMPLE_GAME_SPRITE_H

#include <tuple>
#include <string>
#include <boost/uuid/uuid.hpp>

class Sprite {
private:
    std::string spriteId;
    int row;
    int col;
public:
    Sprite();
    Sprite(std::string spriteId);
    Sprite(int row, int col);
    void setRow(int row);
    void setCol(int col);
    void setCoor(int row, int col);
    std::string getId();
    int getRow();
    int getCol();
    std::tuple<int, int> getCoor();
};


#endif //SIMPLE_GAME_SPRITE_H
