#ifndef MATHSNAKE_SNAKE_H
#define MATHSNAKE_SNAKE_H

#include <vector>
#include "Entity.h"

class Snake {
protected:
    int length;
    char direction; //WASD layout
    float speed;
    vector<Vector2> tail;
public:
    Snake() : Entity(color, pos), length(1), direction('S'), speed(1) {};
};


#endif //MATHSNAKE_SNAKE_H
