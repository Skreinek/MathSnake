#ifndef MATHSNAKE_ENTITY_H
#define MATHSNAKE_ENTITY_H

#include "raylib.h"

class Entity {

protected:
    Vector2 pos; //position
    Color color;
    float anim; //animation
public:

    Entity(Vector2 pos, Color color) : pos(pos), color(color), anim(0){};
    Entity(Color color) : color(color), pos({0.0,0.0}), anim(0) {};
    virtual ~Entity() = default;

    void virtual DrawEntity() = 0;

};

#endif //MATHSNAKE_ENTITY_H
