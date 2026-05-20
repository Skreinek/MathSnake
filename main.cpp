#include "raylib.h"
#include "Game.h"
#include "UI.h"

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
            default:
                MS.DoStart();
                break;
        }


        EndDrawing();
    }
    return 0;
}