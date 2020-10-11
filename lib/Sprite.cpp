//
// Created by plascenciaj on 10/10/20.
//
#include "uuidUtil.h"
#include "Sprite.h"

Sprite::Sprite() {
    spriteId = uuidUtil::getUUID();
    setCoor(0, 0);
}
Sprite::Sprite(int x, int y) { setCoor(x, y); }

void Sprite::setCol(int y) { col=y; }

void Sprite::setRow(int x) { row=x; }

void Sprite::setCoor(int x, int y) { setCol(y); setRow(x); }

std::string Sprite::getId() { return spriteId; }

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
    return std::make_tuple(row, col);
}

