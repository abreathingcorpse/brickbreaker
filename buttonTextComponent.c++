#include "commonIncludes.h" 
#include "buttonTextComponent.h"

ButtonTextComponent::ButtonTextComponent() : mButtonSprite(sf::Vector2f(10.f,10.f)), mFont() {
    std::cout << "Constructor ButtonTextComponent()" << std::endl;
    loadFont("NotoSans-Regular.ttf");
}

ButtonTextComponent::~ButtonTextComponent() {
    std::cout << "Destructor ButtonTextComponent()" << std::endl;
}

// Need to implement the following couple of functions from the Component interface
void ButtonTextComponent::update(sf::Time deltaTime) {
    std::cout << "ButtonTextComponent update()" << std::endl;
}
void ButtonTextComponent::render(sf::RenderWindow& window) {
    window.draw(mButtonSprite);
}

const sf::RectangleShape& ButtonTextComponent::getRectangleShape() const {
    return mButtonSprite;
}
void ButtonTextComponent::setRectangleShape(sf::Vector2f& size, sf::Vector2f& position) {
    mButtonSprite.setSize(size);
    mButtonSprite.setPosition(position);
}
const sf::Font& ButtonTextComponent::getFont() const {
    return mFont;
}
void ButtonTextComponent::setFont(sf::Font& font, std::string fontName) {
    mFont = font;
    loadFont(fontName);
}
const sf::Text& ButtonTextComponent::getText() const {
    return mText;
}
void ButtonTextComponent::setText(sf::Text& text) {
    mText = text;
}
const sf::Transformable& ButtonTextComponent::getTransform() const {
    return mTransform;
}
void ButtonTextComponent::setTransform(sf::Transformable& transform) {
    mTransform = transform;
}

void ButtonTextComponent::loadFont(std::string fontName) {
    if(!mFont.loadFromFile("resources/fonts/"+fontName)) {
        std::cerr << fontName << " could not be loaded." << std::endl;
    }
}
const sf::Vector2f ButtonTextComponent::getPosition() const {
    return mTransform.getPosition();
}
void ButtonTextComponent::setPosition(const sf::Vector2f &position) {
    mTransform.setPosition(position);
}