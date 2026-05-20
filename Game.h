#ifndef MATHSNAKE_GAME_H
#define MATHSNAKE_GAME_H

#include <random>
#include "Window.h"
#include "Snake.h"
#include "Apple.h"
#include "Grid.h"
#include "UI.h"

class Game {
    friend class Window;
    friend class Grid;
    friend class Entity;
    friend class Snake;
    friend class Apple;
    friend class UI;
protected:
    Window window;
    Grid grid;
    Snake snake;
    Apple* apple;
    UI ui;

    int gamePhase; //0 - START, 1 - GRA, 2 - GAMEOVER
    double currentTime, lastTime;
    std::random_device rd;
    std::mt19937 gen;

public:
    Game() : window(900), grid(15), snake(grid), apple(nullptr), currentTime(GetTime()), lastTime(GetTime()),
    gen(rd()), gamePhase(0)
    {
        grid.tileSize = (float)window.res/grid.dim;
    };

    Vector2 getRandomPosition();
    bool TimeCycle();
    void DoStart();
    void DoGame();
    void DoGameOver();
    void MoveSnake();
    void CreateApple();
    bool IsAppleEaten();
    void UpdateFreeTiles();
    int GetGamePhase();


};

#endif //MATHSNAKE_GAME_H
