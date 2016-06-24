#include "Scene.h"
#include "Texture.h"
Scene* Scene::SCENE=nullptr;
Scene::Scene()
{
	background=nullptr;
	this->window=new sf::RenderWindow(sf::VideoMode(800, 900), "Demonstar");
	this->background = new sf::Sprite(Texture::Background);
	this->myplane=new sf::Sprite(Texture::Myplane);
	this->myplane->setPosition(370,720);
}
sf::RenderWindow* Scene::getWindow()
{
	return this->window;
}
void Scene::add(Sprite* sprite){
    this->sprites.insert(sprite);
}
void Scene::addbullet(Bullet* bullet){
    this->mybullets.insert(bullet);
}

void Scene::display()
{
    for(auto &sprite : this->sprites){
        sprite->heartBeat();
        this->window->draw(*sprite);
    }
	this->window->display();
}
Scene* Scene::getScene()
{
	if (!SCENE){
		SCENE=new Scene;
	}
	return SCENE;
}
void Scene::left()
{
	this->myplane->move(-10,0);
}
void Scene::right()
{
	this->myplane->move(10,0);
}
void Scene::up()
{
	this->myplane->move(0,-10);
}
void Scene::down()
{
	this->myplane->move(0,10);
}
