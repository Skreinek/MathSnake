#include "../headers/Button.h"

bool Button::wasClicked() {
    Vector2 m = GetMousePosition();

    if (m.x >= pos.x && m.x <= (pos.x + size.x) &&
        m.y >= pos.y && m.y <= (pos.y + size.y))
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) || IsKeyPressed(KEY_ENTER))
            return true;
    return false;
}

void Button::Draw() {
    DrawRectangle(pos.x, pos.y, size.x, size.y, color);
    int textSize = MeasureText(text.c_str(), font);
    DrawText(text.c_str(), pos.x + size.x/2 - (float)textSize/2.0, pos.y + size.y/2 - (float)font/2.2, font, WHITE);
}