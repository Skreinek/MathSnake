#include "Game.h"
#include "raylib.h"

void Game::Draw() {
    BeginDrawing();

        ClearBackground(RAYWHITE);
        grid.Draw();

    EndDrawing();
};