#pragma once
#include "commonIncludes.h"
#include <map>
#include "transformComponent.h"

// Forward declaration
class Component;

class Entity {
    public:
        Entity();

        virtual void update(sf::Time deltaTime);
        virtual void render(sf::RenderWindow& window);
        void create();
        void destroy();
        void addComponent(const ComponentTypes& component_type, std::shared_ptr<Component> component);
//        void addComponent(std::string component_type, std::shared_ptr<Component> component);
        void removeComponent(const ComponentTypes& component_type);

        std::shared_ptr<Component> getComponent(const ComponentTypes& component_type);

    private:
//        std::map<std::string, std::shared_ptr<Component>> mComponents;
        std::map<ComponentTypes, std::shared_ptr<Component>> mComponents;
};