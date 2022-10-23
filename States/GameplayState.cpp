#include "GameplayState.h"

GameplayState::GameplayState(sf::Font& font)
	:
	State(font)
{
	text.setCharacterSize(30);
	text.setString("Gameplay State running...");
}
void GameplayState::update(float dt)
{

}
void GameplayState::render(sf::RenderTarget& target)
{
	target.draw(text);
}