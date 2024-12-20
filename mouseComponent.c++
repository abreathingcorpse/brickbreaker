#include "mouseComponent.h"

// Need to implement the following couple of functions from the Component interface
void MouseComponent::update(sf::Time deltaTime) {
    sf::Vector2i mousePosition = mMouse.getPosition();
    std::cout << "Mouse position: (" << mousePosition.x << "," << mousePosition.y << ")" << std::endl;
}
void MouseComponent::render(sf::RenderWindow& window, sf::Transform transform) {
    // Doesn't make sense to render mouse 
}

const sf::Mouse& MouseComponent::getMouse() const {
    return mMouse;
}
void MouseComponent::setMouse(sf::Mouse& mouse) {
    mMouse = mouse;
}