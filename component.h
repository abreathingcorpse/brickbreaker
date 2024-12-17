#pragma once
#include "commonIncludes.h"

// Component is an interface
class Component {
    public:
        // Virtual destructor, since it's a parent
        virtual ~Component();
        virtual void update(sf::Time deltaTime) = 0;
        virtual void render() = 0;
};