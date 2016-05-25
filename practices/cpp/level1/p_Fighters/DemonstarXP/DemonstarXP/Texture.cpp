#include "Texture.h"
sf::Texture Texture::Background;
sf::Texture Texture::Myplane;
sf::Texture Texture::MyBullet;
void Texture::load(){

    Myplane.loadFromFile("image.png");
    Background.loadFromFile("background.jpg");
	MyBullet.loadFromFile("mybullet.png");
}