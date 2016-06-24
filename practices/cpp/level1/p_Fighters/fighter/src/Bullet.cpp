#include "Bullet.h"
#include "Texture.h"
Bullet::Bullet(float x,float y)
{
	this->setTexture(Texture::Bullet);
	this->setPosition(x,y);
}
void Bullet::heartbeat()
{
    if (!owner){
        this->move(0,-10);
    }
    else{
        this->move(0,10);
    }
}
