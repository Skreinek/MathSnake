#ifndef MATHSNAKE_SNAKE_H
#define MATHSNAKE_SNAKE_H

#include <vector>
#include "Entity.h"
#include "raylib.h"

class Snake : public Entity {

protected:
    int length;
    char direction; //WASD layout
    float speed;
    std::vector<Vector2> tail;

public:
    Snake() : Entity(WHITE), length(1), direction('S'), speed(1) {};

    void CalculateTail();
    void DrawEntity() override;

};

#endif //MATHSNAKE_SNAKE_H
