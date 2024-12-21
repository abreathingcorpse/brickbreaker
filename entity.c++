#include "entity.h"
#include "component.h"

Entity::Entity() {
}

void Entity::create() {

}

void Entity::destroy() {

}

void Entity::update(const sf::RenderWindow& window, const sf::Time& deltaTime) {
//    mouseSingleton.update(mWindow);
    // For each component in mComponents, call update
    for(std::map<std::string, std::shared_ptr<Component>>::iterator it = mComponents.begin();
        it != mComponents.end(); it++) {
//    for(std::shared_ptr<Component> component : mComponents) {
        it->second->update(deltaTime);
    }
}

void Entity::render(sf::RenderWindow& window) {
//    for(std::shared_ptr<Component> component : mComponents) {
    for(std::map<std::string, std::shared_ptr<Component>>::iterator it = mComponents.begin();
        it != mComponents.end(); it++) {
//        component->render(window);
        if (it->first != "TransformComponent") {
            std::shared_ptr<Component> transformAsComponent = this->getComponent(ComponentTypes::TRANSFORM_COMPONENT);
            std::shared_ptr<TransformComponent> transformComponent = std::reinterpret_pointer_cast<TransformComponent>(transformAsComponent);
            sf::Transform transform = transformComponent->getTransform().getTransform();
            it->second->render(window, transform);
        }
    }
}

void Entity::addComponent(std::string component_type, std::shared_ptr<Component> component) {
    mComponents.insert({component_type, component});
}

void Entity::removeComponent(std::string component_type) {
    mComponents.erase(component_type);
}

std::shared_ptr<Component> Entity::getComponent(const ComponentTypes component_type) {
    auto searchIterator = mComponents.find("TransformComponent");

    if (searchIterator != mComponents.end()) {
        return searchIterator->second;
    } 

    std::cerr << "Entity attempted to get Component of type: " <<
                 component_type << " and failed.";

    return nullptr;
}