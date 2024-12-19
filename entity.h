#pragma once
#include "commonIncludes.h"

// Forward declaration
class Component;

class Entity {
    public:
        Entity();

        virtual void update(sf::Time deltaTime);
        virtual void render(sf::RenderWindow& window);
        void create();
        void destroy();
        void addComponent(std::shared_ptr<Component> component);
        void removeComponent(std::shared_ptr<Component> component);

    private:
        std::vector<std::shared_ptr<Component>> mpComponents;
};