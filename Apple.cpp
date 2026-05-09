#include "Apple.h"

void Apple::DrawEntity() {
    float offset = grid.tileSize/2;
    DrawCircle(pos.x*grid.tileSize + offset, pos.y*grid.tileSize + offset ,offset, color);

};
