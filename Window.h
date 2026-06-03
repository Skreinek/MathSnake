#ifndef MATHSNAKE_WINDOW_H
#define MATHSNAKE_WINDOW_H

#include "raylib.h"

class Window {

    friend class Game;
    friend class UI;

protected:
    int res; //resolution

public:
    Window(int res) : res(res)
    {
        InitWindow(res, res, "MathSnake - Test");
        SetTargetFPS(60);
    };

};

#endif //MATHSNAKE_WINDOW_H
