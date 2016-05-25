#pragma once
#include "Sprite.h"
#include "Bullet.h"
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Scene:public Sprite{
public:
	static Scene* myscene;
	Scene();
	sf::RenderWindow* getWindow();
	void add(Sprite*);
	void addbullet(Bullet*);
	void display();

	void left();
	void right();
	void up();
	void down();

	static Scene* getScene();
private:
	sf::Sprite* background;
	sf::Sprite* myplane;
	sf::RenderWindow* window;
	unordered_set<Sprite * > sprites;
	unordered_set<Sprite * > mybullets;
	static Scene* SCENE;
};

