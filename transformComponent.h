#pragma once
#include "commonIncludes.h"
#include "component.h"

class TransformComponent : public Component {
    public:
        // Need to override this from the parent interface
        void update(sf::Time deltaTime) override;
        void render(sf::RenderWindow& window, sf::Transform transform) override;

        // Setter & getter
        const sf::Transformable& getTransform() const;
        void setTransform(sf::Transformable& transform);

        // Other methods
        const sf::Vector2f getPosition() const;
        void setPosition(const sf::Vector2f &position);

    private:
        sf::Transformable mTransform;
};