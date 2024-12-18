#pragma once
#include "commonIncludes.h"
#include "buttonTextComponent.h"
#include "entity.h"

class MainMenuScreen : public sf::Drawable {
    public:
        MainMenuScreen();
        ~MainMenuScreen();
//        void loadFont();
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
        std::shared_ptr<Entity> mpPlayButton;
//        sf::Font mFont;
//        sf::Text mTitle;
//        ButtonText mPlayButton;

};