#include "entity.h"
#include "component.h"

Entity::Entity() {
    mpComponents.resize(2);
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

void Entity::render() {
    for(std::shared_ptr<Component> component : mpComponents) {
        component->render();
    }
}

void Entity::addComponent(std::shared_ptr<Component> component) {
    std::cout << "Enters Entity.addComponent()" << std::endl;
    mpComponents.push_back(component);
    std::cout << "Leaving Entity.addComponent()" << std::endl;
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