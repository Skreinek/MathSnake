#ifndef MATHSNAKE_GAME_H
#define MATHSNAKE_GAME_H

#include "Window.h"
#include "Snake.h"
#include "Apple.h"
#include "Grid.h"

class Game {
    friend class Window;
    friend class Grid;
    friend class Snake;
    friend class Apple;

protected:
    Window window;
    Grid grid;
    Snake snake;
    Apple apple;

    double currentTime, lastTime;

public:
    Game() : window(900), grid(15), snake(grid), apple(), currentTime(GetTime()), lastTime(GetTime())
    {
        grid.tileSize = (float)window.res/grid.dim;
    };

    bool TimeCycle();
    void DrawGame();
    void MoveSnake();
    void checkSnakeCollisions();


};

#endif //MATHSNAKE_GAME_H
