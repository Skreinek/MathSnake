#include "Snake.h"

void Snake::DrawEntity() {
    float offset = grid.tileSize/2;
    DrawCircle(pos.x*grid.tileSize + offset, pos.y*grid.tileSize + offset ,offset, color);

    for(int i = 0; i<length; i++) {
        if (i != length-1)
            DrawCircle(tail[i].x*grid.tileSize + offset, tail[i].y*grid.tileSize + offset ,offset, RED);
        else
            DrawCircle(tail[i].x*grid.tileSize + offset, tail[i].y*grid.tileSize + offset ,offset, WHITE);

    }
};

void Snake::CalculateTail() {

    lastTailPos = tail[length-1];

        for(int i = length - 1; i > 0; i--) {
            tail[i].x = tail[i - 1].x;
            tail[i].y = tail[i - 1].y;
    }

    tail[0] = lastHeadPos;
}

void Snake::Grow() {
    length++;
    tail.push_back(lastTailPos);
}

bool Snake::CheckCollision() {
    for (int i=0; i<length-1; i++) {
        if (pos.x == tail[i].x && pos.y== tail[i].y)
            return true;
    }
    return false;
}
