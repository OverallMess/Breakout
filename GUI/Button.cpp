#include "Button.h"

Button::Button(sf::Font& font, const std::string& str, const sf::Vector2f& position, const sf::Vector2f& size)
	:
	font(font),
	position(position),
	size(size)
{
	text.setFont(font);
	text.setCharacterSize(16);
	text.setString(str);
	shape.setFillColor(idleColor);
	
	shape.setPosition(position);
	shape.setSize(size);

	sf::Rect<float> textRect = text.getGlobalBounds();

	text.setOrigin(
		textRect.left + textRect.width / 2.f,
		textRect.top + textRect.height / 2.f
	);

	text.setPosition(
		this->shape.getPosition().x + (this->shape.getGlobalBounds().width / 2.f),
		this->shape.getPosition().y + (this->shape.getGlobalBounds().height / 2.f)
	);
}

Button& Button::operator=(const Button& other)
{
	if (&other == this) return *this;
	position = other.position;
	size = other.size;
	font = other.font;
	shape = other.shape;
	text = other.text;
	return *this;

	//const sf::Vector2f position;
	//const sf::Vector2f size;
	//const sf::Font& font;
	//sf::RectangleShape shape;
	//sf::Text text;

	//const sf::Color idleColor{ 75, 75, 75, 200 };
	//const sf::Color hoverColor{ 100, 100, 100, 200 };
	//const sf::Color activeColor{ 150, 150, 150, 200 };
}

void Button::update(const sf::Vector2f& mouse_pos)
{
	if (shape.getGlobalBounds().contains(mouse_pos))
	{
		shape.setFillColor(hoverColor);
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			shape.setFillColor(activeColor);
		}
	}
	else
	{
		shape.setFillColor(idleColor);
	}
}
void Button::render(sf::RenderTarget& target)
{
	target.draw(shape);
	target.draw(text);
}

Button::~Button()
{

}