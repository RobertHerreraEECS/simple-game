#include <iostream>
#include <cstdlib> 
#include <chrono>
#include <thread>

#include "GameManager.h"

int main(void) {

    GameManager game;

    game.setScreenSize(10,10);

    //game.printScreen();
    int x = 100;

    // main game loop
    while (1) {

        game.printScreen();
        int res = game.parseUserInput();
        if (res < 0) break;
        std::this_thread::sleep_for(std::chrono::milliseconds(x));
    }
    game.clearScreen();

    exit(0);
}
