#include "Enemy.h"
#include "Sound.h"
#include "Texture.h"
#include "Game.h"
#include <random>
#include <iostream>
Enemy::Enemy()
{
    srand(time(NULL));
    this->setTexture(Texture::Enemy);
    std::uniform_int_distribution<unsigned> u(0,480);
    std::default_random_engine random_engine;
    this->setPosition(u(Game::random_engine), 20);

    this->gun.setOwner(this);
}
void Enemy::heartBeat()
{
    switch (this->state){
        case 0:
            this->move(0,10);
            break;
        case 1:
            this->setTexture(Texture::Enemyfall);
        default:;
    }
}
void Enemy::hit()
{
    Sound::enemyfall.play();
    this->state=1;
}
bool Enemy::isdead()
{
    return (this->state!=0);
}
void Enemy::fire()
{
    this->gun.enemyfire();
}
