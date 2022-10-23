#include "MenuState.h"

MenuState::MenuState(sf::RenderWindow& window, sf::Font& font)
	:
	State(window, font)
{
	initButtons();
	text.setCharacterSize(30);
}

void MenuState::initButtons()
{
	button_map["START"] = Button(font, "Start Game", { 100.f, 100.f }, { 100.f, 50.f });
	button_map["QUIT"]	= Button(font, "Quit Game", { 100.f, 200.f }, { 100.f, 50.f });
}

void MenuState::update(float dt)
{
	State::update(dt);
	for (auto& btn : button_map)
	{
		btn.second.update(mousePosView);
	}
}
void MenuState::render()
{
	for (auto& btn : button_map)
	{
		btn.second.render(window);
	}
}