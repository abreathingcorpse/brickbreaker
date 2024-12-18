#include "mainmenuScreen.h"

MainMenuScreen::MainMenuScreen() {
    std::cout << "Constructor MainMenuScreen()" << std::endl;
//    ButtonTextComponent* pPlayButtonTextComponent = new ButtonTextComponent();
//
    mpPlayButton = std::make_shared<Entity>();
    std::shared_ptr<ButtonTextComponent> pPlayButtonTextComponent = std::make_shared<ButtonTextComponent>();
    std::cout << "Before Entity->addComponent(ButtonTextComponent)" << std::endl;
    mpPlayButton->addComponent(pPlayButtonTextComponent);
    std::cout << "After Entity->addComponent(ButtonTextComponent)" << std::endl;

//    Component* pReinterpretedPlayButtonTextComponent;
//    reinterpret_cast<std::shared_ptr<Component*>>(pPlayButtonTextComponent);
//    std::shared_ptr<Component> pReinterpretedPlayButtonTextComponent = reinterpret_cast<std::shared_ptr<Component>>(pPlayButtonTextComponent);
//
//    mpPlayButton->addComponent(pReinterpretedPlayButtonTextComponent);
//    mpPlayButton->addComponent(reinterpret_cast<Component*>(pPlayButtonTextComponent));
//    delete pPlayButtonTextComponent;
//    pPlayButtonTextComponent = nullptr;
}

MainMenuScreen::~MainMenuScreen() {
    std::cout << "Deconstructor MainMenuScreen()" << std::endl;
}

void MainMenuScreen::draw(sf::RenderTarget& target, sf::RenderStates states) const {
//    target.draw(mPlayButton.getRectangleShape(), mPlayButton.getTransform().getTransform());
}