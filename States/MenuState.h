#pragma once
#include <map>
#include <string>

#include "State.h"
#include "../GUI/Button.h"

class MenuState : public State
{
public:
	MenuState(sf::RenderWindow& window, sf::Font& font);
	void update(float dt) override;
	void render() override;
private:
	void initButtons();
private:
	std::map<std::string, Button> button_map;
};