#ifndef MATHSNAKE_APPLE_H
#define MATHSNAKE_APPLE_H

#include "Entity.h"
class Apple : public Entity {

protected:
    char type;

public:
    Apple() : Entity(RED) {};
    //Apple(char type) : Entity(color, pos), type(type) {};

    void DrawEntity() override;

};


#endif //MATHSNAKE_APPLE_H
