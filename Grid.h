#ifndef MATHSNAKE_GRID_H
#define MATHSNAKE_GRID_H

#include "raylib.h"

class Grid {
protected:
    int dim; //dimention
    float tileSize;
    bool** map;
    bool& start, center;
    Color color_1, color_2;
public:
    Grid(int dim) : dim(dim){
        //tileSize
        bool* map = new bool[dim]; //true - tile is occupied, false = tile is free
        for(int i=0; i<dim; i++)
            for(int j=0; j<dim; j++)
                map[j][i] = false; 
        //tile start    
        //tile center
        //color_1
        //color_2
    }

};


#endif //MATHSNAKE_GRID_H
