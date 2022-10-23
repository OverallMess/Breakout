#pragma once
#include <SFML/Graphics.hpp>

class State
{
public:
	State(sf::RenderWindow& window, sf::Font& font);
	virtual ~State() = default;
	virtual void update(float dt);
	virtual void render() = 0;
private:
	void updateMousePosition();
protected:
	sf::RenderWindow& window;
	sf::Font& font;
	sf::Text text;
	sf::Vector2f mousePosView;
};

