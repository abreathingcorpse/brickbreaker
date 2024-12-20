#include "transformComponent.h"

// Need to implement the following couple of functions from the Component interface
void TransformComponent::update(sf::Time deltaTime) {
//    std::cout << "TransformComponent update()" << std::endl;
}
void TransformComponent::render(sf::RenderWindow& window, sf::Transform transform) {
    // Doesn't make sense to render a Transformable
}

const sf::Transformable& TransformComponent::getTransform() const {
    return mTransform;
}
void TransformComponent::setTransform(sf::Transformable& transform) {
    mTransform = transform;
}
const sf::Vector2f TransformComponent::getPosition() const {
    return mTransform.getPosition();
}
void TransformComponent::setPosition(const sf::Vector2f &position) {
    mTransform.setPosition(position);
}