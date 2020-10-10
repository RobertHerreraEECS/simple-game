//
// Created by plascenciaj on 10/10/20.
//

#ifndef SIMPLE_GAME_SPRITE_H
#define SIMPLE_GAME_SPRITE_H


class Sprite {
private:
    int spriteId;
    int row;
    int col;
public:
    Sprite();
    Sprite(int spriteId);
    Sprite(int row, int col);
    int setRow(int row);
    int setCol(int col);
    int setCoor(int row, int col);
    int getId();
    int getRow();
    int getCol();
    std::tuple<int, int> getCoor();
};


#endif //SIMPLE_GAME_SPRITE_H
