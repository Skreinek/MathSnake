#include "../headers/Game.h"
#include "raylib.h"

void Game::DoStart() {
    grid.Draw();
    snake->DrawEntity();
    if (!ui.DrawStart())
        gamePhase++;
}

void Game::DoGame() {
    grid.Draw();
    ui.DrawGame();

    if(!apple)
        CreateApple();
    else
        apple->DrawEntity();

    MoveSnake();

    if (IsSnakeColliding())
    { gamePhase++; return; }

//Conditions
    if (IsAppleEaten())
        snake->Grow();

    snake->DrawEntity();

    if (snake->length == grid.dim*grid.dim)
    { gamePhase = 3; return; }

    //DrawText(TextFormat("Pozycja X: %.2f", snake->pos.x), 10, 10, 20, BLACK);
    //DrawText(TextFormat("Pozycja Y: %.2f", snake->pos.y), 10, 40, 20, BLACK);
    //DrawText(TextFormat("Dlugosc weza: %.d", snake->length), 10, 70, 20, BLACK);
};

void Game::DoGameOver() {
    grid.Draw();
    snake->DrawEntity();
    if (!ui.DrawGameOver(snake->length-2))
        gamePhase = 0;
}

void Game::DoGameWon() {
    grid.Draw();
    snake->DrawEntity();
    if (!ui.DrawGameWon())
        gamePhase = 0;
}

void Game::MoveSnake() {

    if (IsKeyPressed(KEY_W) && snake->direction != 'S') snake->direction = 'W';
    if (IsKeyPressed(KEY_S) && snake->direction != 'W') snake->direction = 'S';
    if (IsKeyPressed(KEY_A) && snake->direction != 'D') snake->direction = 'A';
    if (IsKeyPressed(KEY_D) && snake->direction != 'A') snake->direction = 'D';

    if ( TimeCycle() ) {

        snake->lastHeadPos = snake->pos;

        switch (snake->direction) {
            case 'W':
                snake->pos.y--;
                break;
            case 'S':
                snake->pos.y++;
                break;
            case 'A':
                snake->pos.x--;
                break;
            case 'D':
                snake->pos.x++;
                break;
        }

        lastTime = currentTime;
        snake->CalculateTail();
        UpdateFreeTiles();
    }
}

bool Game::TimeCycle() {
    currentTime = GetTime();

    if (currentTime - lastTime >= snake->speed)
        return true;
    return false;
}

Vector2 Game::getRandomPosition() {
    std::uniform_int_distribution<int> dist(0, grid.dim - 1);
    float x = 0.0, y = 0.0;
    UpdateFreeTiles();
    do {
        x = dist(gen);
        y = dist(gen);
    }
    while (grid.map[(int)x][(int)y]);

    return {x,y};
}

void Game::UpdateFreeTiles() {
    for (int i=0; i<grid.dim; i++)
        for (int j=0; j<grid.dim; j++)
            grid.map[i][j] = false;

    for (int i=0; i<snake->length; i++) {
        grid.map[(int)snake->tail[i].x][(int)snake->tail[i].y] = true;
    }
}

void Game::CreateApple() {
    if(snake->length == 1)
        apple = new Apple(grid, {grid.center.x + 2, grid.center.y});
    else
        apple = new Apple(grid, getRandomPosition());
}

bool Game::IsAppleEaten() {
    if(snake->pos.x == apple->pos.x && snake->pos.y == apple->pos.y) {
        delete apple;
        apple = nullptr;
        return true;
    }
    return false;
}

int Game::GetGamePhase() {
    return gamePhase;
}

bool Game::IsSnakeColliding() {
    if (snake->pos.x < 0 || snake->pos.x >= grid.dim ||
        snake->pos.y < 0 || snake->pos.y >= grid.dim)
        return true;

    for (int i=0; i<snake->length; i++) {
        if (snake->pos.x == snake->tail[i].x && snake->pos.y == snake->tail[i].y)
            return true;
    }
    return false;
}

void Game::ResetSnake() {
    delete snake;
    snake = new Snake(grid);
}