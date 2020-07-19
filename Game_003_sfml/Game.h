#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class Game
{
private:
	sf::RenderWindow* window;

	//Private functions
	void initWindow();


public:
	Game();
	virtual ~Game();

	//Functions
	void run();

	void update();
	void render();
};

