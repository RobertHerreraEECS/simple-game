#include "GameManager.h"
#include "Sprite.h"

#include <curses.h>
     
#define ITERMAX 10
#define ROWSMAX 20
#define COLSMAX 20

//TODO: organize a bit more but this will do for now

void GameManager::setScreenSize(size_t rows, size_t cols) {

}

void GameManager::updateScreen(std::tuple<size_t, size_t> coord, int value) {

}

void GameManager::printScreen() {
    long iter;
    int yi, xi;

    // initialize curses
    initscr();
    cbreak();
    clear();
   
    // print screen
    for(int i=0; i < ROWSMAX; i++) {

        for(int j=0; j < COLSMAX; j++) {
            yi = i;
            xi = j;
    
            mvaddch(yi, xi, '*');
            refresh();
        }
    }
   
    // usage
    mvaddstr(ROWSMAX, 0, "Press 'q' to quit");
    refresh();
}

int GameManager::parseUserInput() {

    //noecho(); // keeps characters from being printed
    int userInput = getch();
    mvaddstr(ROWSMAX + 2, 0, std::to_string(userInput).c_str());

    mvaddch(5, 5, (char) userInput);

    refresh();
    if (userInput == 113) {
        return -1;
    }
    return userInput;

}

void GameManager::clearScreen() {
    refresh();
    endwin();
}

void GameManager::initializeScreen(int value) {}
