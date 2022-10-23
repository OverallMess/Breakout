#pragma once
#include <SFML/Graphics.hpp>

class State
{
public:
	State(sf::Font& font);
	virtual void update(float dt) = 0;
	virtual void render(sf::RenderTarget& target) = 0;
protected:
	sf::Font& font;
	sf::Text text;
};

