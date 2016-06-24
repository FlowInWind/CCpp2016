#ifndef TEXTURE_H
#define TEXTURE_H
#include <SFML/Graphics.hpp>
class Texture{
public:
    static sf::Texture Myplane;
    static sf::Texture Background;
	static sf::Texture Bullet;
	static sf::Texture EnemyBullet;
	static sf::Texture Enemy;
    static sf::Texture Enemyfall;
    static void load();
};
#endif // TEXTURE_H
