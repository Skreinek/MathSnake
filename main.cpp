#include "raylib.h"
#include "Game.h"

int main() {

    Game MS;

    while (!WindowShouldClose() && !MS.GameOver())
    {
        MS.DrawGame();
    }

    return 0;
}