#ifndef GAME_SCREEN_H
#define GAME_SCREEN_H

#include <tuple>
#include <cinttypes>

class GameManager {
public:
    /**
     * @brief Sets the screen size to a desired dimension
     * @param rows Amount of rows in screen
     * @param cols Amount of columns in screen
     */
    void setScreenSize(size_t rows, size_t cols);

    /**
     * @brief Update the screen with a given value (i.d.) at a 
     *      specific coordinate.
     * @param coord The coordinate to assign the value of a given 
     *      sprite.
     */
    void updateScreen(std::tuple<size_t, size_t> coord, int value);

    /**
     * @brief Print the current status of screen. This wil be called continuously
     *     while in the game loop.
     */
    void printScreen();

    /**
     * @brief Intialize all values on the screen
     * @param value The value that will encompass the entire screen. 
     */
    void initializeScreen(int value);
    
};


#endif //GAME_SCREEN_H
