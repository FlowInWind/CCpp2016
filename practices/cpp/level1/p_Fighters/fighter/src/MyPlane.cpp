#include "MyPlane.h"
#include "Texture.h"
MyPlane::MyPlane()
{
    this->setTexture(Texture::Myplane);
    this->setPosition(370,820);
    this->gun.setOwner(this);
}
void MyPlane::left()
{
    if (this->getPosition().x>=10){
        this->move(-10,0);
    }
}
void MyPlane::right()
{
    if (this->getPosition().x<=750){
        this->move(10,0);
    }
}
void MyPlane::up()
{
    if (this->getPosition().y>=10){
        this->move(0,-10);
    }
}
void MyPlane::down()
{
    if (this->getPosition().y<=840){
        this->move(0,10);
    }
}
void MyPlane::die()
{
    this->setPosition(370,820);
}
