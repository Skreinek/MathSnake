#ifndef MATHSNAKE_SNAKE_H
#define MATHSNAKE_SNAKE_H

#include <vector>
#include "Entity.h"
#include "Grid.h"
#include "raylib.h"

class Snake : public Entity {

    friend class Game;

protected:
    const Grid& grid;
    int length;
    char direction; //WASD layout
    float speed;
    Vector2 lastHeadPos;
    Vector2 lastTailPos;
    std::vector<Vector2> tail;

public:
    Snake(const Grid& grid) : Entity({1.0,2.0}, Fade(WHITE, 0.5f)), length(2), direction('S'), speed(0.2), grid(grid),
    lastHeadPos({pos.x, pos.y - 1}) {
        tail.push_back(lastHeadPos);
            tail[0] = {pos.x, pos.y-1};
        tail.push_back(lastTailPos);
            tail[1] = { tail[0].x, tail[0].y - 1 };
    };

    void DrawEntity() override;
    void CalculateTail();
    void Grow();
    bool CheckCollision();

};

#endif //MATHSNAKE_SNAKE_H
