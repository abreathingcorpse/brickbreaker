#include "game.h"
#include <iostream>

Game::Game() : mWindow(sf::VideoMode(1920,1080),"brickbreaker") {
    screenState = MAIN_MENU; 
}

void Game::processEvents() {
    sf::Event event;

    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            screenState = EXIT_GAME;
    }
}

void Game::update(sf::Time deltaTime) {
    // The update methods will be called here
}

void Game::render() {
    mWindow.clear();

    switch (screenState) {
        case MAIN_MENU: {
            mWindow.draw(mScreenManager.getMainMenuScreen());
            break;
        }
        case EXIT_GAME: {
            std::cout << "Good Bye!" << std::endl;
            mWindow.close();
            std::cout << "After Close" << std::endl;
            break;
        }
        case STAGE_SELECTOR: {
            break;
        }
        case MODS_SELECTOR: {
            break;
        }
        case GAME_LOOP: {
            mWindow.draw(mBall.getCircleShape());
            break;
        }
        case GAME_PAUSED: {
            break;
        }
        case GAME_OVER: {
            break;
        }
    }

    mWindow.display();
}

void Game::run() {
    sf::Clock clock;
    sf::Time elapsedTime;
    const sf::Time framerate = sf::seconds(1.f/60);

    while(mWindow.isOpen()){
        elapsedTime += clock.restart();

        while (elapsedTime > framerate) {
            elapsedTime -= framerate;
            processEvents();
            update(elapsedTime);
        }

        render();
    }
}