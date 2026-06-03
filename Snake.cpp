#include "Snake.h"

void Snake::DrawEntity() {
    float offset = grid.tileSize/2;
    DrawCircle(pos.x*grid.tileSize + offset, pos.y*grid.tileSize + offset ,offset, WHITE);

    float shrink = -offset/2 / length;
    int colorOffset = 255/5 /length;
    for(int i = 0; i<length; i++) {
        color.r = (i+1)* (255 - colorOffset);

        if (i != length-1)
            DrawCircle(tail[i].x*grid.tileSize + offset, tail[i].y*grid.tileSize + offset ,offset + shrink * (i+1), color);
            else
            DrawCircle(tail[i].x*grid.tileSize + offset, tail[i].y*grid.tileSize + offset ,offset + shrink * (i+1), color);

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
