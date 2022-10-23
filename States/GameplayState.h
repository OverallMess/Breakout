#pragma once
#include "State.h"

class GameplayState : public State
{
public:
	GameplayState(sf::RenderWindow&, sf::Font& font);
	void update(float dt) override;
	void render() override;
};