#ifndef MATHSNAKE_GAME_H
#define MATHSNAKE_GAME_H

#include "Window.h"
#include "Snake.h"
#include "Apple.h"
#include "Grid.h"

class Game {

    friend class Window;
    friend class Snake;
    friend class Apple;
    friend class Grid;

protected:
    Window window;
    Snake snake;
    Apple apple;
    Grid grid;

public:
    Game() : window(900), snake(), apple(), grid(15)
    {
        grid.tileSize = (float)window.res/grid.dim;
    };

    void Draw();

};

#endif //MATHSNAKE_GAME_H
