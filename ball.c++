#include "ball.h"

Ball::Ball() : mSprite(10.f) {};

const float& Ball::getRadius() const {
    return m_fRadius;
}
void Ball::setRadius(float& radius) {
    m_fRadius = radius;
}
const sf::Vector2f& Ball::getPosition() const {
    return mPosition;
}
void Ball::setPosition(sf::Vector2f &position) {
    mPosition = position;
}
const sf::Vector2f& Ball::getVelocity() const {
    return mVelocity;
}
void Ball::setVelocity(sf::Vector2f &velocity) {
    mVelocity = velocity;
}
void Ball::setCircleShape(float& radius, sf::Vector2f& position) {}
const sf::CircleShape& Ball::getCircleShape() const {
    return mSprite;
}

void Ball::move(sf::Vector2f &velocity, sf::Time deltaTime) {}
void Ball::checkCollision() {}
void Ball::checkBallGone() {}
void Ball::update(sf::Time deltaTime) {}