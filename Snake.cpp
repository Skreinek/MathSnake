#include "Snake.h"

void Snake::DrawEntity(float size) {
    float offset = size/2;
    DrawCircle(pos.x*grid.tileSize + offset, pos.y*grid.tileSize + offset ,offset, color);

    for(int i = 0; i<length; i++) {
        DrawCircle(tail[i].x*grid.tileSize + offset, tail[i].y*grid.tileSize + offset ,offset, RED);
    }
};

void Snake::CalculateTail() {

    if (length > 1 ) {
        for(int i = length - 1; i > 0; i--) {
            tail[i].x = tail[i - 1].x;
        }
    }

    tail[0] = lastHeadPos;
}
