#include <iostream>
#include <cstdlib> 

#include "GameManager.h"

int main(void) {

    GameManager game;

    game.setScreenSize(10,10);

    game.printScreen();

    exit(0);
}
