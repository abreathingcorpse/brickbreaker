#pragma once
#include "commonIncludes.h"

class MouseSingleton {
    public:
        static MouseSingleton& instance();
//        MouseWrapper(const sf::RenderWindow& window);

        // Setter & getter
        const sf::Mouse& getMouse() const;
        void setMouse(sf::Mouse& mouse);

        // Other methods
        void update(const sf::RenderWindow& window);
//        const sf::Vector2f getPosition() const;
//        void setPosition(const sf::Vector2f &position);

    private:
        MouseSingleton() = default;
        sf::Mouse mMouse;
//        sf::RenderWindow mWindow;
};