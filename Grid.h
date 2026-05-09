#ifndef MATHSNAKE_GRID_H
#define MATHSNAKE_GRID_H

#include "raylib.h"

class Grid {

    friend class Game;
    friend class Snake;
    friend class Apple;

protected:
    int dim; //dimention - odd number prefered
    float tileSize;
    Vector2 center;
    bool** map;
    Color color_1, color_2;

public:
    Grid(int dim) : dim(dim), tileSize(0), color_1(GetColor(0x00d48fff)), color_2(GetColor(0x00c363ff))
    {
        map = new bool*[dim]; //true - tile is occupied, false = tile is free
        for(int i=0; i<dim; i++) {
            map[i] = new bool[dim];
            for(int j=0; j<dim; j++)
                map[i][j] = false;
        }

        int intCenter = dim/2 + 1;
        center.x = (float)intCenter;
        center.y = (float)intCenter;

    }

    ~Grid() {
        for(int i=0; i<dim; i++)
            delete[] map[i];
        delete[] map;

        map = nullptr;
    };

    void Draw();

};

#endif //MATHSNAKE_GRID_H
