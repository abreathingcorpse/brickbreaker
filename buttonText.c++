#include "commonIncludes.h" 
#include "buttonText.h"

ButtonText::ButtonText() : mButtonSprite(sf::Vector2f(10.f,10.f)), mFont() {
    std::cout << "Constructor ButtonText()" << std::endl;
    loadFont("NotoSans-Regular.ttf");
}

const sf::RectangleShape& ButtonText::getRectangleShape() const {
    return mButtonSprite;
}
void ButtonText::setRectangleShape(sf::Vector2f& size, sf::Vector2f& position) {
    mButtonSprite.setSize(size);
    mButtonSprite.setPosition(position);
}
const sf::Font& ButtonText::getFont() const {
    return mFont;
}
void ButtonText::setFont(sf::Font& font, std::string fontName) {
    mFont = font;
    loadFont(fontName);
}
const sf::Text& ButtonText::getText() const {
    return mText;
}
void ButtonText::setText(sf::Text& text) {
    mText = text;
}
const sf::Transformable& ButtonText::getTransform() const {
    return mTransform;
}
void ButtonText::setTransform(sf::Transformable& transform) {
    mTransform = transform;
}

void ButtonText::loadFont(std::string fontName) {
    if(!mFont.loadFromFile("resources/fonts/"+fontName)) {
        std::cerr << fontName << " could not be loaded." << std::endl;
    }
}
const sf::Vector2f ButtonText::getPosition() const {
    return mTransform.getPosition();
}
void ButtonText::setPosition(const sf::Vector2f &position) {
    mTransform.setPosition(position);
}