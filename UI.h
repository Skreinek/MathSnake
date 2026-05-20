#ifndef MATHSNAKE_UI_H
#define MATHSNAKE_UI_H

#include "Button.h"

class UI {

    friend class Game;

protected:
    Button* startButton;
    Button* tryAgainButton;
public:
    UI(){
        startButton = new Button("Start", {300, 300},{400,120} , RED);
        tryAgainButton = new Button("Try again", {300, 300},{400,120} , RED);
    };

    bool DrawStart();
    bool DrawGame();
    bool DrawGameOver();
};


#endif //MATHSNAKE_UI_H
