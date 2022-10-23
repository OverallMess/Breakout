#include "GameplayState.h"

GameplayState::GameplayState(sf::RenderWindow& window, sf::Font& font)
	:
	State(window, font)
{
	text.setCharacterSize(30);
	text.setString("Gameplay State running...");
}
void GameplayState::update(float dt)
{

}
void GameplayState::render()
{
	window.draw(text);
}