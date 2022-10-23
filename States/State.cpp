#include "State.h"
State::State(sf::RenderWindow& window, sf::Font& font)
	:
	window(window),
	font(font),
	mousePosView(window.mapPixelToCoords(sf::Mouse::getPosition(window)))
{
	text.setFont(font);
}

void State::updateMousePosition()
{
	mousePosView = window.mapPixelToCoords(sf::Mouse::getPosition(window));
}

void State::update(float dt)
{
	updateMousePosition();
}