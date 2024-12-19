#include "entity.h"
#include "component.h"

Entity::Entity() {
}

void Entity::create() {

}

void Entity::destroy() {

}

void Entity::update(sf::Time deltaTime) {
    // For each component in mpComponents, call update
    for(std::shared_ptr<Component> component : mpComponents) {
        component->update(deltaTime);
    }
}

void Entity::render(sf::RenderWindow& window) {
    for(std::shared_ptr<Component> component : mpComponents) {
        component->render(window);
    }
}

void Entity::addComponent(std::shared_ptr<Component> component) {
    mpComponents.push_back(component);
}

void Entity::removeComponent(std::shared_ptr<Component> component) {
    if(std::find(mpComponents.begin(), mpComponents.end(), component)
        == mpComponents.end()) {
        std::cerr << "Attempted to remove component which does not" << 
        " belong to entity" << std::endl;
    } else {
        mpComponents.erase(std::find(mpComponents.begin(), mpComponents.end(),
        component));
    }
}