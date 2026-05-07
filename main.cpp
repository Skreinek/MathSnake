#include "raylib.h"

int main() {
    // Inicjalizacja okna
    InitWindow(800, 450, "MathSnake - Test");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Logika (pusta na razie)

        // Rysowanie
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("MathSnake dziala na Chromebooku!", 150, 200, 20, DARKGRAY);
        DrawFPS(10, 10);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}