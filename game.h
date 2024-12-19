#pragma once
#include <SFML/Graphics.hpp>
#include "ball.h"
#include "mainmenuScreen.h"
#include "screenManager.h"

enum ScreenState {
    MAIN_MENU,
    EXIT_GAME,
    STAGE_SELECTOR,
    MODS_SELECTOR,
    GAME_LOOP,
    GAME_PAUSED,
    GAME_OVER
};

class Game {
    public:
        Game();
        void run();
        void processEvents();
        void update(sf::Time deltaTime);
        void render(sf::RenderWindow& window);

    private:
        sf::RenderWindow mWindow;
        Ball mBall;
        ScreenState screenState;
        ScreenManager mScreenManager;
};