#include "Player.h"

void Player::initVariables()
{
	this->movementSpeed = 5.f;
	this->attackCooldawnMax = 5.f;
	this->attackCooldawn = this->attackCooldawnMax;

}

void Player::initTexture()
{
	//Load a texture from file
	if (!this->texture.loadFromFile("Textures/Spaceship.png"))
	{
		std::cout << "ERROR::PLAYER::INITTEXTURE::Could not load texture file." << "\n";
	}
}

void Player::initSprite()
{
	//Set the texture to the sprite
	this->sprite.setTexture(this->texture);

	//Resize the sprite
	this->sprite.scale(0.5f, 0.5f);
}

Player::Player()
{
	
	this->initVariables();
	this->initTexture();
	this->initSprite();

}

Player::~Player()
{

}

const sf::Vector2f& Player::getPos() const
{
	return this->sprite.getPosition();
}

const sf::FloatRect Player::getBounds() const
{
	return this->sprite.getGlobalBounds();
}

void Player::move(const float dirX, const float dirY)
{
	this->sprite.move(this->movementSpeed * dirX, this->movementSpeed * dirY);
}

const bool Player::canAttack()
{
	if (this->attackCooldawn >= this->attackCooldawnMax)
	{
		this->attackCooldawn = 0.f;
		return true;
	}
	return false;
}

void Player::updateAttack()
{
	if(this->attackCooldawn < this->attackCooldawnMax)
	this->attackCooldawn += 0.5f;
}

//Functions
void Player::update()
{
	this->updateAttack();
}

void Player::render(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}
