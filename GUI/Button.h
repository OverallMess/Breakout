#pragma once
#include <SFML/Graphics.hpp>

class Button 
{
public:
	Button() = default;
	Button(sf::Font& font, const std::string& text, const sf::Vector2f& position, const sf::Vector2f& size);
	~Button();
	Button& operator=(const Button& other);
	void update(const sf::Vector2f& mouse_pos);
	void render(sf::RenderTarget& target);
private:
	sf::Vector2f position;
	sf::Vector2f size;
	sf::Font& font;
	sf::RectangleShape shape;
	sf::Text text;

	const sf::Color idleColor{ 75, 75, 75, 200 };
	const sf::Color hoverColor{ 100, 100, 100, 200 };
	const sf::Color activeColor{ 150, 150, 150, 200 };
};
