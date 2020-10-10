//
// Created by plascenciaj on 10/10/20.
//

#include <tuple>
#include "uuidUtil.h"
#include "Sprite.h"

Sprite::Sprite() { spriteId= uuidUtil::getUUID(); }
Sprite::Sprite(int x, int y) { setCoor(x, y); }
int Sprite::setCol(int y) { col=y; }
int Sprite::setRow(int x) { row=x; }
int Sprite::setCoor(int x, int y) { setCol(y); setRow(x); }
int Sprite::getId() { return spriteId; }
int Sprite::getRow()
{
    return row;
}
int Sprite::getCol()
{
    return col;
}
std::tuple<int, int> Sprite::getCoor()
{
    return std::tuple<int, int>{row, col};
}
