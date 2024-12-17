#pragma once
#include "commonIncludes.h"

// Forward declaration
class Component;

class Entity {
    public:
        virtual ~Entity();

        virtual void update(sf::Time deltaTime);
        virtual void render();

    private:
        std::vector<Component*> mComponents;
};