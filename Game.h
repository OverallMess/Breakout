#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <fstream>
#include <string>
#include <random>
#include <stack>
#include <chrono>

#include "States/State.h"
#include "States/MenuState.h"
#include "States/GameplayState.h"
#include "Utils/FrameTimer.h"

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	void render();
	void update();
	void poll_events();
private:
	std::unique_ptr<sf::RenderWindow> window;
	std::stack<State*> states;
	std::mt19937 mt;
	sf::Font font;

	FrameTimer timer;

	// TEST
};
