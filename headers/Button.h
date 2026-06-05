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
    int font;

public:
    Button(const std::string text, Vector2 pos, Vector2 size, int font, Color color) : text(text), color(color), isClicked(false),
    pos({pos.x - size.x/2, pos.y - size.y/2}), size(size), font(font) {};

    Button(const Button&) = delete;
    Button& operator=(const Button&) = delete;

    bool wasClicked();
    void Draw();
};

#endif //MATHSNAKE_BUTTON_H