#pragma once
#include <SFML/Graphics.hpp>
#include "ball.h"

class Game {
    public:
        Game();
        void run();
        void processEvents();
        void update(sf::Time deltaTime);
        void render();

    private:
        sf::RenderWindow mWindow;
        Ball mBall;
};