#include "Planes.h"
#include "Gun.h"
#include "Scene.h"
#include "Bullet.h"
#include "Texture.h"
void Gun::fire(){
    sf::Vector2f pos = ((this->owner)->getPosition());
    Bullet* bullet = new Bullet(pos.x+16,pos.y-10);
    bullet->owner=0;
    Scene::getInstance()->add(bullet);
    Scene::getInstance()->addMybullet(bullet);
}
void Gun::enemyfire(){
    sf::Vector2f pos = ((this->owner)->getPosition());
    Bullet* bullet = new Bullet(pos.x+16,pos.y-10);
    bullet->owner=1;
    bullet->setTexture(Texture::EnemyBullet);
    Scene::getInstance()->add(bullet);
    Scene::getInstance()->addEnemybullet(bullet);
}
sf::Vector2f Gun::getPosition(){
    sf::Vector2f ff;
    return ff;
}
void Gun::setOwner(Planes* owner){
    this->owner = owner;
}
