#ifndef MATHSNAKE_GRID_H
#define MATHSNAKE_GRID_H

#include "raylib.h"

class Grid {

    friend class Game;
    friend class Snake;

protected:
    int dim; //dimention
    float tileSize;
    bool** map;
    //bool& start, center;
    Color color_1, color_2;

public:
    Grid(int dim) : dim(dim), tileSize(0)
    {
        //tileSize
        map = new bool*[dim]; //true - tile is occupied, false = tile is free
        for(int i=0; i<dim; i++) {
            map[i] = new bool[dim];
            for(int j=0; j<dim; j++)
                map[i][j] = false;
        }

        //tile start    
        //tile center
        color_1 = GetColor(0x00d48fff);
        color_2 = GetColor(0x00c363ff);
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
