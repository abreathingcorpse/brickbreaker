#include "mainmenuScreen.h"

MainMenuScreen::MainMenuScreen() {
    mpPlayButton = std::make_shared<Entity>();
    std::shared_ptr<ButtonTextComponent> pPlayButtonTextComponent = std::make_shared<ButtonTextComponent>();
    mpPlayButton->addComponent(pPlayButtonTextComponent);
}

MainMenuScreen::~MainMenuScreen() {
    std::cout << "Deconstructor MainMenuScreen()" << std::endl;
}

const std::shared_ptr<Entity> MainMenuScreen::getPlayButton() const {
    return mpPlayButton;
}
void MainMenuScreen::setPlayButton(std::shared_ptr<Entity> playButton) {
    mpPlayButton = playButton;
}

//void MainMenuScreen::draw(sf::RenderTarget& target, sf::RenderStates states) const {
////    target.draw(mPlayButton.getRectangleShape(), mPlayButton.getTransform().getTransform());
////    for(std::shared_ptr<Component> component : mpComponents) {
////        component->render();
////    }
//    mpPlayButton->render(target);
//}

void MainMenuScreen::render(sf::RenderWindow& window) {
    mpPlayButton->render(window);
}