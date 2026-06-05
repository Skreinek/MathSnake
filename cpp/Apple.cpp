#include "../headers/Apple.h"
#include <cmath>

void Apple::DrawEntity() {
    float animation = 0.1 * (sin(anim) + 10);

    float offset = grid.tileSize * animation /2;
    anim += 0.1;

    int colorOffset = 255/animation * 0.9;
    color.r = 30 - colorOffset;
    color.g = color.r;

    DrawCircle(pos.x * grid.tileSize + (grid.tileSize / 2), pos.y * grid.tileSize + (grid.tileSize / 2), offset, color);

};

