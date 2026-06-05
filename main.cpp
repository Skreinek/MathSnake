#include "raylib.h"
#include "headers/Game.h"
int main() {

    Game MS;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        switch (MS.GetGamePhase()) {
            case 1:
                MS.DoGame();
                break;
            case 2:
                MS.DoGameOver();
                break;
            case 3:
                MS.DoGameWon();
                break;
            default:
                MS.ResetSnake();
                MS.DoStart();
                break;
        }


        EndDrawing();
    }
    return 0;
}