#include "GameManager.h"
#include "Sprite.h"

#include <curses.h>
     
#define ITERMAX 10
#define ROWSMAX 20
#define COLSMAX 20

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
    noecho();
    
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
   
    // done
    mvaddstr(ROWSMAX, 0, "Press any key to quit");
    refresh();

    getch();
    endwin();

}


void GameManager::initializeScreen(int value) {

}
