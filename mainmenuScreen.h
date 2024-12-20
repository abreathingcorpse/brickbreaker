#pragma once
#include "commonIncludes.h"
#include "entity.h"
#include "buttonTextComponent.h"
#include "transformComponent.h"

class MainMenuScreen {
    public:
        // Constructor & Destructor
        MainMenuScreen();
        ~MainMenuScreen();

        // Setters & getters
        const std::shared_ptr<Entity> getPlayButton() const;
        void setPlayButton(std::shared_ptr<Entity> playButton);

        void render(sf::RenderWindow& window);
        void loadFont();

    private:
        std::shared_ptr<Entity> mpPlayButton;
        sf::Font mFont;
        sf::Text mTitle;
};