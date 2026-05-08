//
// Created by skreinek on 5/7/26.
//

#ifndef MATHSNAKE_GAME_H
#define MATHSNAKE_GAME_H

#include "Window.h"
#include "Snake.h"
#include "Apple.h"
#include "Grid.h"

class Game {
public:
    Window window;
    Snake snake;
    Apple apple;
    Grid grid;
};


#endif //MATHSNAKE_GAME_H
