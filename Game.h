#ifndef MATHSNAKE_GAME_H
#define MATHSNAKE_GAME_H

#include "Window.h"
#include "Snake.h"
#include "Apple.h"
#include "Grid.h"

class Game {
protected:
    Window window;
    Snake snake;
    Apple apple;
    Grid grid;
public:
    Game(){
    }
};



#endif //MATHSNAKE_GAME_H
