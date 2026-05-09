#include "Game.h"
#include "raylib.h"

void Game::DrawGame() {
    BeginDrawing();
    ClearBackground(RAYWHITE);

        grid.Draw();
        MoveSnake();
        snake.CalculateTail();
        snake.DrawEntity(grid.tileSize);

    EndDrawing();
};

void Game::MoveSnake() {

    if (IsKeyPressed(KEY_W) && snake.direction != 'S') snake.direction = 'W';
    if (IsKeyPressed(KEY_S) && snake.direction != 'W') snake.direction = 'S';
    if (IsKeyPressed(KEY_A) && snake.direction != 'D') snake.direction = 'A';
    if (IsKeyPressed(KEY_D) && snake.direction != 'A') snake.direction = 'D';

    if ( TimeCycle() ) {

        snake.lastHeadPos = snake.pos;

        switch (snake.direction) {
            case 'W':
                snake.pos.y--;
                break;
            case 'S':
                snake.pos.y++;
                break;
            case 'A':
                snake.pos.x--;
                break;
            case 'D':
                snake.pos.x++;
                break;
        }

        lastTime = currentTime;
    }

    DrawText(TextFormat("Pozycja X: %.2f", snake.pos.x), 10, 10, 20, BLACK);
    DrawText(TextFormat("Pozycja Y: %.2f", snake.pos.y), 10, 40, 20, BLACK);


}

bool Game::TimeCycle() {
    currentTime = GetTime();

    if (currentTime - lastTime >= snake.speed)
        return true;
    return false;
}