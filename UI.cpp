#include "UI.h"

bool UI::DrawStart() {
    if (startButton->isClicked)
        return false;

    startButton->Draw();
    if (startButton->wasClicked())
        startButton->isClicked = true;

    return true;
}

bool UI::DrawGame() {

}

bool UI::DrawGameOver() {
    if (tryAgainButton->isClicked)
        return false;

    tryAgainButton->Draw();
    if (tryAgainButton->wasClicked())
        tryAgainButton->isClicked = true;

    return true;
}
