#pragma once
#include "commonIncludes.h"
#include "buttonText.h"

class MainMenuScreen : public sf::Drawable {
    public:
        MainMenuScreen();
//        void loadFont();
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
//        sf::Font mFont;
//        sf::Text mTitle;
        ButtonText mPlayButton;

};