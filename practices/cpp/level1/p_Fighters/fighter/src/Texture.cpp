#include "Texture.h"
sf::Texture Texture::Background;
sf::Texture Texture::Myplane;
sf::Texture Texture::EnemyBullet;
sf::Texture Texture::Bullet;
sf::Texture Texture::Enemy;
sf::Texture Texture::Enemyfall;
void Texture::load(){

    Myplane.loadFromFile("image.png");
    Background.loadFromFile("background.jpg");
	Bullet.loadFromFile("bullet.png");
	EnemyBullet.loadFromFile("enemybullet.png");
	Enemy.loadFromFile("enemy1.png");
	Enemyfall.loadFromFile("enemyfall.png");
}
