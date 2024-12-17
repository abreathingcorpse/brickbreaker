#include "mainmenuScreen.h"

MainMenuScreen::MainMenuScreen() : mPlayButton() {
    std::cout << "Constructor MainMenuScreen()" << std::endl;
}

void MainMenuScreen::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(mPlayButton.getRectangleShape(), mPlayButton.getTransform().getTransform());
}