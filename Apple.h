#ifndef MATHSNAKE_APPLE_H
#define MATHSNAKE_APPLE_H

#include "Entity.h"
class Apple {
protected:
    char type;
public:
    Apple() : Entity(color, pos) {};
    Apple(char type) : Entity(color, pos), type(type) {};

};


#endif //MATHSNAKE_APPLE_H
