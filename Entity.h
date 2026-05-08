#ifndef MATHSNAKE_ENTITY_H
#define MATHSNAKE_ENTITY_H

class Entity {
protected:
    Vector2 pos; //position
    Color color;
public:
    Entity(Vector2 pos, Color color) : pos(pos), color(color) {};
};


#endif //MATHSNAKE_ENTITY_H
