#ifndef MATHSNAKE_ENTITY_H
#define MATHSNAKE_ENTITY_H

#include "raylib.h"

class Entity {

protected:
    Vector2 pos; //position
    Color color;
public:

    Entity(Vector2 pos, Color color) : pos(pos), color(color) {};
    Entity(Color color) : color(color), pos({0.0,0.0}) {};
    virtual ~Entity() = default;

    void virtual DrawEntity(float size) = 0;

};

#endif //MATHSNAKE_ENTITY_H
