//
// Created by plascenciaj on 10/10/20.
//

#ifndef SIMPLE_GAME_SPRITE_H
#define SIMPLE_GAME_SPRITE_H


class Sprite {
private:
    int row;
    int col;
public:
    sprite();
    sprite(int row, int col);
    int getX();
    int getY();
    int getCoor();
    int setX();
    int setY();
    int setCoor();
};


#endif //SIMPLE_GAME_SPRITE_H
