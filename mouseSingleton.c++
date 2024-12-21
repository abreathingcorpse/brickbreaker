#include "mouseSingleton.h"

//MouseSingleton::MouseWrapper(const sf::RenderWindow& window) {
//    mWindow = window;
//}
MouseSingleton& MouseSingleton::instance() {
    // C++ 11 ensures that the initializer for a local static variable is run only once
    static MouseSingleton* instance = new MouseSingleton();

    return *instance;
}

const sf::Mouse& MouseSingleton::getMouse() const {
    return mMouse;
}
void MouseSingleton::setMouse(sf::Mouse& mouse) {
    mMouse = mouse;
}

void MouseSingleton::update(const sf::RenderWindow& window) {
    sf::Vector2i mousePosition = mMouse.getPosition(window);
    std::cout << "Mouse position: (" << mousePosition.x << "," << mousePosition.y << ")" << std::endl;
}