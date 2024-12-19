#pragma once
#include "commonIncludes.h"
#include "buttonTextComponent.h"
#include "entity.h"

class MainMenuScreen /*: public sf::Drawable*/ {
    public:
        // Constructor & Destructor
        MainMenuScreen();
        ~MainMenuScreen();

        // Setters & getters
        const std::shared_ptr<Entity> getPlayButton() const;
        void setPlayButton(std::shared_ptr<Entity> playButton);

//        void loadFont();
//        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

        void render(sf::RenderWindow& window);

    private:
        std::shared_ptr<Entity> mpPlayButton;
//        sf::Font mFont;
//        sf::Text mTitle;
//        ButtonText mPlayButton;

};