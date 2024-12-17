#include "entity.h"
#include "component.h"

void Entity::update(sf::Time deltaTime) {
    // For each component in mComponents, call update
    for(Component* component : mComponents) {
        component->update(deltaTime);
    }
}

void Entity::render() {
    for(Component* component : mComponents) {
        component->render();
    }
}