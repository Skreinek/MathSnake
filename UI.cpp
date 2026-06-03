#include "UI.h"
#include <string>

bool UI::DrawStart() {
    if (startButton->isClicked)
        return false;

    if (tryAgainButton->isClicked)
        tryAgainButton->isClicked = false;

    startButton->Draw();

    if (startButton->wasClicked())
        startButton->isClicked = true;

    return true;
}

void UI::DrawGame() {
    if (startButton->isClicked)
        startButton->isClicked = false;



}

bool UI::DrawGameOver(int score) {
    if (tryAgainButton->isClicked)
        return false;

    DrawRectangle(0, 0, res, res, Fade(BLACK, 0.5f));
    tryAgainButton->Draw();
    std::string yourScore = "Score:"; std::string stringScore = std::to_string(score);
    int sizeYourScore = MeasureText(yourScore.c_str(), 100);

    DrawText(TextFormat("Score: %.d", score), res/2 - float(sizeYourScore)/2.0, res/2 - (float)100/0.8, 100, WHITE);

    if (tryAgainButton->wasClicked())
        tryAgainButton->isClicked = true;

    return true;
}

bool UI::DrawGameWon() {
    if (tryAgainButton->isClicked)
        return false;

    DrawRectangle(0, 0, res, res, Fade(WHITE, 0.5f));
    tryAgainButton->Draw();

    if (tryAgainButton->wasClicked())
        tryAgainButton->isClicked = true;

    return true;
}