#include "Snake.h"

void Snake::DrawEntity() {
    float offset = grid.tileSize/2;
    DrawCircle(pos.x*grid.tileSize + offset, pos.y*grid.tileSize + offset ,offset, color);

    for(int i = 0; i<length; i++) {
        DrawCircle(tail[i].x*grid.tileSize + offset, tail[i].y*grid.tileSize + offset ,offset, RED);
    }
};

void Snake::CalculateTail() {

    tail[0] = lastHeadPos;
    if (length > 1 ) {
        for(int i = length - 1; i > 0; i--) {
            tail[i].x = tail[i - 1].x;
            tail[i].y = tail[i - 1].y;
        }
    }
}

void Snake::Grow() {
    length++;
    tail.push_back(lastTailPos);
}
