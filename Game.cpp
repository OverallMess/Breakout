#include "Game.h"
#include <iostream>

Game::Game()
	:
	window(std::make_unique<sf::RenderWindow>(sf::VideoMode(1920, 1080), "Breakout")),
	mt(std::random_device{}())
{
	window->setFramerateLimit(60);
	font.loadFromFile("Fonts/Dosis-Light.ttf"); // it might fail to load...
	states.push(new MenuState(font));
	states.push(new GameplayState(font));
}


void Game::run()
{
	while (window->isOpen())
	{
		poll_events();
		update();
		render();
	}
}

void Game::render()
{
	window->clear();
	if (states.size() > 0)
	{
		states.top()->render(*window);
	}
	window->display();
}

void Game::update()
{
	float dt = timer.get_elapsed();
	if (states.size() > 0)
	{
		states.top()->update(dt);
	}
	window->setTitle(std::to_string(1 / dt));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		delete states.top();
		states.pop();
	}

}

void Game::poll_events()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();
	}
}

Game::~Game()
{
	while (states.size() > 0)
	{
		delete states.top();
		states.pop();
	}
}