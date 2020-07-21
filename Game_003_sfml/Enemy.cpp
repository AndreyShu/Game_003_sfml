#include "Enemy.h"

void Enemy::initShape()
{
	this->shape.setRadius(rand() % 20 + 20);
	this->shape.setPointCount(rand() % 5 + 3);
}

void Enemy::initVariables()
{
	this->type   = 0;
	this->hpMax  = 10;
	this->hp     = 0;
	this->damage = 1;
	this->points = 5;
}

Enemy::Enemy(float pos_x, float pos_y)
{
	this->initShape();
	this->initVariables();
	this->shape.setPosition(pos_x, pos_y);
}

Enemy::~Enemy()
{

}

//Functions
void Enemy::update()
{

}

void Enemy::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
