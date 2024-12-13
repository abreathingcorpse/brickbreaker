#pragma once
#include <SFML/Graphics.hpp>

class Ball {
    public:
        // Constructor
        Ball();
        // Setters & getters
        //
        // The second const makes everything inside of the function constant
        // Therefore we'll be getting a reference to a float that's constant.
        // Which is why the first const is required.
        const float& getRadius() const;
        void setRadius(float& radius);
        const sf::Vector2f& getPosition() const;
        void setPosition(sf::Vector2f &position);
        const sf::Vector2f& getVelocity() const;
        void setVelocity(sf::Vector2f &velocity);
        void setCircleShape(float& radius, sf::Vector2f& position);
        const sf::CircleShape& getCircleShape() const;

        // Other methods
        void move(sf::Vector2f &velocity, sf::Time deltaTime);
        void checkCollision();
        void checkBallGone();
        void update(sf::Time deltaTime);

    private:
        float m_fRadius;
        sf::Vector2f mPosition;
        sf::Vector2f mVelocity;
        sf::CircleShape mSprite;
};