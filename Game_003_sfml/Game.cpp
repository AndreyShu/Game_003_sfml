#include "Game.h"

//Private functions
void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Game 3", sf::Style::Close | sf::Style::Titlebar);
}

//Constructor and Destructor
Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

//Functions
void Game::run()
{
	while (this->window->isOpen())
	{
		this->update();
		this->render();
	}
}

void Game::update()
{
	sf::Event e;
	while (this->window->pollEvent(e))
	{
		if (e.Event::type == sf::Event::Closed)
			this->window->close();
	}
}

void Game::render()
{
	this->window->clear();

	//Draw all the stuff

	this->window->display();
}
