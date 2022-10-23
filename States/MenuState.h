#pragma once
#include "State.h"

class MenuState : public State
{
public:
	MenuState(sf::Font& font);
	void update(float dt) override;
	void render(sf::RenderTarget& target) override;
private:
};