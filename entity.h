#pragma once
#include "commonIncludes.h"

// Forward declaration
class Component;

class Entity {
    public:
        Entity();
//        virtual ~Entity(); Commented out, since it's not a parent

        virtual void update(sf::Time deltaTime);
        virtual void render();
        void create();
        void destroy();
//        void update(sf::Time deltaTime);
//        void render();
        void addComponent(std::shared_ptr<Component> component);
        void removeComponent(std::shared_ptr<Component> component);

    private:
        std::vector<std::shared_ptr<Component>> mpComponents;
};