#pragma once
#include "State.h"

class GameplayState : public State
{
public:
	GameplayState(sf::Font& font);
	void update(float dt) override;
	void render(sf::RenderTarget& target) override;
};