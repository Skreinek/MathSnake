#include "raylib.h"
#include "Game.h"

int main() {

    Game MS;

    while (!WindowShouldClose())
    {
        MS.DrawGame();
    }

    return 0;
}