#include "Bullet.h"
#include "Texture.h"
Bullet::Bullet(float x,float y)
{
	this->setTexture(Texture::MyBullet);
	this->setPosition(x,y);
}
void Bullet::heartbeat()
{
	this->move(0,-10);
}
