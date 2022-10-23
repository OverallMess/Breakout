#include "MenuState.h"

MenuState::MenuState(sf::Font& font)
	:
	State(font)
{
	text.setCharacterSize(30);
	text.setString("Main Menu State running...");
}
void MenuState::update(float dt)
{

}
void MenuState::render(sf::RenderTarget& target)
{
	target.draw(text);
}