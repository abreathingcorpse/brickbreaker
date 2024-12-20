#include "commonIncludes.h" 
#include "buttonTextComponent.h"

ButtonTextComponent::ButtonTextComponent(std::string text) : mButtonSprite(), mFont() {
    // Font
    loadFont("NotoSans-Regular.ttf");

    // Text
    mText.setFont(mFont);
    mText.setString(text);

    // Button
    sf::FloatRect textBoundingBox = mText.getLocalBounds();
    sf::Vector2f textSize = textBoundingBox.getSize();
    mButtonSprite.setSize(textSize + sf::Vector2f(5.f,5.f));
    mButtonSprite.setFillColor(sf::Color::Blue);

}

ButtonTextComponent::~ButtonTextComponent() {
    std::cout << "Destructor ButtonTextComponent()" << std::endl;
}

// Need to implement the following couple of functions from the Component interface
void ButtonTextComponent::update(sf::Time deltaTime) {
    std::cout << "ButtonTextComponent update()" << std::endl;
}
void ButtonTextComponent::render(sf::RenderWindow& window, sf::Transform transform) {
    window.draw(mButtonSprite, transform); 
    window.draw(mText, transform); 
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

void ButtonTextComponent::loadFont(std::string fontName) {
    if(!mFont.loadFromFile("resources/fonts/"+fontName)) {
        std::cerr << fontName << " could not be loaded." << std::endl;
    }
}