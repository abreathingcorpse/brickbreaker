#include "game.h"

Game::Game() : mWindow(sf::VideoMode(1920,1080),"brickbreaker") {}

void Game::processEvents() {
    sf::Event event;

    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            mWindow.close();
    }
}

void Game::update(sf::Time deltaTime) {
    // The update methods will be called here
}

void Game::render() {
    mWindow.clear();
    mWindow.draw(mBall.getCircleShape());
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