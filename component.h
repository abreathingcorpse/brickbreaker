#pragma once
#include "commonIncludes.h"

// Component is an interface
class Component {
    public:
        // Virtual destructor, since it's a parent
        virtual ~Component();

        // Methods overriden by the Components
        virtual void update(sf::Time deltaTime) = 0;
        virtual void render(sf::RenderWindow& window) = 0;
};