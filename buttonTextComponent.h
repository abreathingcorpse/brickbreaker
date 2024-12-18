#pragma once
#include "commonIncludes.h"
#include "component.h"

class ButtonTextComponent : public Component {
    public:
        // Constructor & Destructor
        ButtonTextComponent();
        ~ButtonTextComponent();

        // Need to override this from the parent interface
        void update(sf::Time deltaTime) override;
        void render(sf::RenderWindow& window) override;

        // Setters & getters
        const sf::RectangleShape& getRectangleShape() const;
        void setRectangleShape(sf::Vector2f& size, sf::Vector2f& position);
        const sf::Font& getFont() const;
        void setFont(sf::Font& font, std::string fontName);
        const sf::Text& getText() const;
        void setText(sf::Text& text);
        const sf::Transformable& getTransform() const;
        void setTransform(sf::Transformable& transform);

        // Other methods
        void loadFont(std::string fontName);
        const sf::Vector2f getPosition() const;
        void setPosition(const sf::Vector2f &position);

    private:
        sf::RectangleShape mButtonSprite;
        sf::Font mFont;
        sf::Text mText;
        sf::Transformable mTransform;
};