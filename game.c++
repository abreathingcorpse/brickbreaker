#include "game.h"
#include <iostream>

Game::Game() : mWindow(sf::VideoMode(1920,1080),"brickbreaker") {
    screenState = MAIN_MENU; 
    
//    MouseSingleton mouseSingleton = MouseSingleton::instance();

    // Mouse
//    mpMouseSingleton = std::make_shared<MouseSingleton>();
//    mpMouseWrapper = std::make_shared<Entity>();
//    std::shared_ptr<MouseComponent> pMouseComponent = std::make_shared<MouseComponent>();
//    mpMouseWrapper->addComponent("MouseComponent", pMouseComponent);
}

void Game::processEvents() {
    sf::Event event;

    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            screenState = EXIT_GAME;
        }

//        if (event.type == sf::Event::MouseMoved) {
//            mpMouseWrapper->update(mElapsedTime);
////            mMouse.getPosition(mWindow);
//        }
    }
}

void Game::update(sf::Time deltaTime) {

//    mpMouseSingleton->update(mWindow);
    mouseSingleton.update(mWindow);
    
    switch (screenState) {
        case MAIN_MENU: {
            mScreenManager.getMainMenuScreen().update(mElapsedTime);
            break;
        }
        case EXIT_GAME: {
            std::cout << "Good Bye!" << std::endl;
            mWindow.close();
            break;
        }
        case STAGE_SELECTOR: {
            break;
        }
        case MODS_SELECTOR: {
            break;
        }
        case GAME_LOOP: {
//            mWindow.draw(mBall.getCircleShape());
            break;
        }
        case GAME_PAUSED: {
            break;
        }
        case GAME_OVER: {
            break;
        }
    }
}

void Game::render(sf::RenderWindow& mWindow) {
    mWindow.clear();

    switch (screenState) {
        case MAIN_MENU: {
            mScreenManager.getMainMenuScreen().render(mWindow);
            break;
        }
        case EXIT_GAME: {
            std::cout << "Good Bye!" << std::endl;
            mWindow.close();
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
    mElapsedTime = sf::Time::Zero;
    const sf::Time framerate = sf::seconds(1.f/60);

    while(mWindow.isOpen()){
        mElapsedTime += clock.restart();

        while (mElapsedTime > framerate) {
            mElapsedTime -= framerate;
            processEvents();
            update(mElapsedTime);
        }

        render(mWindow);
    }
}