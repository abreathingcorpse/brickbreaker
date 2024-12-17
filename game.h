#pragma once
#include <SFML/Graphics.hpp>
#include "ball.h"
#include "mainmenuScreen.h"

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
        void render();

    private:
        sf::RenderWindow mWindow;
        Ball mBall;
        ScreenState screenState;
        MainMenuScreen mMainMenuScreen; // TODO: ScreenManager should do this
};