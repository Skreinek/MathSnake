#include "raylib.h"
#include "Game.h"

int main() {

    Game MS;

    while (!WindowShouldClose())
    {
        MS.Draw();
    }

    return 0;
}