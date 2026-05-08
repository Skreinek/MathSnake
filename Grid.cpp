#include "Grid.h"

void Grid::Draw() {
    for(int i=0; i<dim; i++)
        for(int j=0; j<dim; j++)
            if ((i + j) % 2 == 0)
                DrawRectangle(j*tileSize, i*tileSize,tileSize,tileSize,color_1);
            else
                DrawRectangle(j*tileSize, i*tileSize,tileSize,tileSize,color_2);
};