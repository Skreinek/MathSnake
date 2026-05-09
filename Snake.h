#ifndef MATHSNAKE_SNAKE_H
#define MATHSNAKE_SNAKE_H

#include <vector>
#include "Entity.h"
#include "Grid.h"
#include "raylib.h"

class Snake : public Entity {

    friend class Game;

protected:
    Grid& grid;
    int length;
    char direction; //WASD layout
    float speed;
    Vector2 lastHeadPos;
    std::vector<Vector2> tail;

public:
    Snake(Grid& grid) : Entity({1.0,2.0}, WHITE), length(1), direction('S'), speed(1.0), grid(grid),
    lastHeadPos({pos.x, pos.y - 1}) {
        tail.push_back(lastHeadPos);
    };

    void CalculateTail();
    void DrawEntity(float size) override;

};

#endif //MATHSNAKE_SNAKE_H
