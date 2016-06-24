#include "Scene.h"
#include "Enemy.h"
#include "Texture.h"
Scene* Scene::instance=nullptr;
Scene::Scene()
{
	background=nullptr;
	this->window=new sf::RenderWindow(sf::VideoMode(800, 900), "Demonstar");
	this->background = new sf::Sprite(Texture::Background);
}
sf::RenderWindow* Scene::getWindow()
{
	return this->window;
}
void Scene::add(Sprite* sprite){
    this->sprites.insert(sprite);
}
void Scene::addMybullet(Bullet* bullet){
    this->mybullets.insert(bullet);
}
void Scene::addMyplane(MyPlane* myplane){
    this->myplane.insert(myplane);
}
void Scene::addEnemybullet(Bullet* bullet){
    this->enemybullets.insert(bullet);
}
void Scene::display()
{
    this->window->draw(*this->background);
    this->clear();
    this->Enemydie();
    this->Myplanedie();
    this->createEnemy();
    this->isOver();
    for(auto &sprite : this->sprites){
        sprite->heartBeat();
        this->window->draw(*sprite);
    }
    this->window->display();
}
void Scene::clear()
{
    for(auto enemy= this->enemies.begin();enemy!=this->enemies.end();){
        if((*enemy)->isdead()){
            delete *enemy;
            this->sprites.erase(*enemy);
            enemy = (this->enemies).erase(enemy);
        }
        else{
            enemy++;
        }
    }
}
void Scene::Enemydie()
{
    for (auto enemy=this->enemies.begin();enemy!=this->enemies.end();enemy++)
    {
        if ((*enemy)->isdead()) continue;
        for (auto bullet=this->mybullets.begin();bullet!=this->mybullets.end();bullet++)
        {
            if ((*enemy)->intersects(*bullet))
                {
                    delete *bullet;
                    this->sprites.erase(*bullet);
                    this->mybullets.erase(bullet);
                    (*enemy)->hit();
                    break;
                }
        }
    }
}
void Scene::Myplanedie()
{
    for (auto me=this->myplane.begin();me!=this->myplane.end();me++)
    {
        for (auto bullet=this->enemybullets.begin();bullet!=this->enemybullets.end();bullet++)
        {
            if ((*me)->intersects(*bullet))
                {
                    delete *bullet;
                    this->sprites.erase(*bullet);
                    this->enemybullets.erase(bullet);
                    (*me)->die();
                    dead++;
                    break;
                }
        }
         for (auto enemy=this->enemies.begin();enemy!=this->enemies.end();enemy++)
        {
            if ((*me)->intersects(*enemy))
                {
                    delete *enemy;
                    this->sprites.erase(*enemy);
                    this->enemies.erase(enemy);
                    (*enemy)->hit();
                    (*me)->die();
                    dead++;
                    break;
                }
        }
    }
}
void Scene::createEnemy()
{
    static int count=20;
    if(++count>=20){
        Enemy* theenemy = new Enemy;
        this->sprites.insert(theenemy);
        this->enemies.insert(theenemy);
        theenemy->fire();
        count = 0;
    }
}
void Scene::isOver()
{
    if (dead>=3)
    {
        this->window->close();
    }
}
Scene* Scene::getInstance()
{
	if (!instance){
		instance=new Scene;
	}
	return instance;
}
