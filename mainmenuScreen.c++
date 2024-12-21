#include "mainmenuScreen.h"

MainMenuScreen::MainMenuScreen() {
    // Play Button
    mpPlayButton = std::make_shared<Entity>();

    std::shared_ptr<ButtonTextComponent> pPlayButtonTextComponent = std::make_shared<ButtonTextComponent>("Play");
    mpPlayButton->addComponent("ButtonTextComponent", pPlayButtonTextComponent);
    
    std::shared_ptr<TransformComponent> pPlayButtonTransformComponent = std::make_shared<TransformComponent>();
    pPlayButtonTransformComponent->setPosition(sf::Vector2f(1000.f,400.f));
    mpPlayButton->addComponent("TransformComponent", pPlayButtonTransformComponent);

    // Mouse
//    mpMouse = std::make_shared<Entity>();
//    std::shared_ptr<MouseComponent> pMouseComponent = std::make_shared<MouseComponent>();
//    mpMouse->addComponent("MouseComponent", pMouseComponent);
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

void MainMenuScreen::update(sf::Time& elapsed_time) {
    mpPlayButton->update(elapsed_time);
//    mpMouse->update(elapsed_time);
}
void MainMenuScreen::render(sf::RenderWindow& window) {
    mpPlayButton->render(window);
}