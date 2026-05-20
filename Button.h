#ifndef MATHSNAKE_BUTTON_H
#define MATHSNAKE_BUTTON_H

#include "raylib.h"
#include <string>

class Button {

    friend class UI;

protected:
    Color color;
    const std::string text;
    Vector2 pos, size;
    bool isClicked;

public:
    Button(const std::string text, Vector2 pos, Vector2 size, Color color) : text(text), color(color), isClicked(false),
    pos(pos), size(size) {};

    bool wasClicked();
    void Draw();
};

#endif //MATHSNAKE_BUTTON_H
