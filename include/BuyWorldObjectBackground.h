#pragma once

#include <SFML/Graphics.hpp>
#include "UIObject.h"
#include "Window.h"

class BuyWorldObjectBackground : public UIObject {
public:
	BuyWorldObjectBackground(sf::Vector2f);

private:
	sf::Sprite create() const;
};