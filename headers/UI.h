#ifndef MATHSNAKE_UI_H
#define MATHSNAKE_UI_H

#include "Window.h"
#include "Button.h"

class UI{

    friend class Game;

protected:
    int& res;
    Button* startButton;
    Button* tryAgainButton;
public:
    UI(int& res) : res(res){
        startButton = new Button("Start", {(float)res/2, (float)res/2},{350,120} , 100, RED);
        tryAgainButton = new Button("Try again", {(float)res/2, (float)res/1.3f},{450,120} , 80, RED);
    };

    ~UI() {
        delete startButton;
        delete tryAgainButton;
    };

    UI(const UI&) = delete;
    UI& operator=(const UI&) = delete;

    bool DrawStart();
    void DrawGame();
    bool DrawGameOver(int score);
    bool DrawGameWon();
};


#endif //MATHSNAKE_UI_H