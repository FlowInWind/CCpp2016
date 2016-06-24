#ifndef SCENE_H
#define SCENE_H
#include <SFML/Graphics.hpp>
#include "Sprite.h"
#include "Bullet.h"
#include "Enemy.h"
#include "MyPlane.h"
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Scene{
public:
    static Scene* getInstance();
    sf::RenderWindow* getWindow();
    void add(Sprite *);
    void addMyplane(MyPlane *);
    void addMybullet(Bullet *);
    void addEnemybullet(Bullet *);
    void display();
private:
    Scene();
    void clear();
    void Enemydie();
    void Myplanedie();
    void createEnemy();
    void isOver();
    sf::RenderWindow* window;
    unordered_set <Sprite * > sprites;
    unordered_set<Enemy * > enemies;
    unordered_set <Bullet * > mybullets;
    unordered_set <Bullet * > enemybullets;
     unordered_set <MyPlane * > myplane;
    sf::Sprite* background=nullptr;
    static Scene* instance;
    int dead=0;
};
#endif // SCENE_H
