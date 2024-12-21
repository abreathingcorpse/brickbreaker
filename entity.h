#pragma once
#include "commonIncludes.h"
#include <map>
#include "transformComponent.h"
#include "mouseSingleton.h"

// Forward declaration
class Component;

enum ComponentTypes {
    BUTTON_TEXT_COMPONENT,
    TRANSFORM_COMPONENT
};

class Entity {
    public:
        Entity();

        virtual void update(const sf::RenderWindow& window, const sf::Time& deltaTime);
        virtual void render(sf::RenderWindow& window);
        void create();
        void destroy();
        void addComponent(std::string component_type, std::shared_ptr<Component> component);
        void removeComponent(std::string component_type);

        std::shared_ptr<Component> getComponent(const ComponentTypes component_type);

    private:
        std::map<std::string, std::shared_ptr<Component>> mComponents;
        MouseSingleton mouseSingleton = MouseSingleton::instance();
};