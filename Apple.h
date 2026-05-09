#ifndef MATHSNAKE_APPLE_H
#define MATHSNAKE_APPLE_H

#include "Entity.h"
#include "Grid.h"

class Apple : public Entity {

    friend class Game;

protected:
    const Grid& grid;
    char type;

public:
    Apple(const Grid& grid, Vector2 pos) : grid(grid), Entity(pos, BLUE) {};
    //Apple(char type) : Entity(color, pos), type(type) {};

    void DrawEntity() override;

};


#endif //MATHSNAKE_APPLE_H
