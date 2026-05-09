#ifndef MATHSNAKE_GAME_H
#define MATHSNAKE_GAME_H

#include <random>
#include "Window.h"
#include "Snake.h"
#include "Apple.h"
#include "Grid.h"

class Game {
    friend class Window;
    friend class Grid;
    friend class Entity;
    friend class Snake;
    friend class Apple;

protected:
    Window window;
    Grid grid;
    Snake snake;
    Apple* apple;

    double currentTime, lastTime;
    std::random_device rd;
    std::mt19937 gen;

public:
    Game() : window(900), grid(15), snake(grid), apple(nullptr), currentTime(GetTime()), lastTime(GetTime()),
    gen(rd())
    {
        grid.tileSize = (float)window.res/grid.dim;
    };

    Vector2 getRandomPosition();
    bool TimeCycle();
    void DrawGame();
    void MoveSnake();
    void CreateApple();
    bool CheckAppleEaten();
    void UpdateFreeTiles();


};

#endif //MATHSNAKE_GAME_H
