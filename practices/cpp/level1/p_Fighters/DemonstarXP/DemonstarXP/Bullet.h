#pragma once
#include "Sprite.h"
class Bullet:public Sprite{
public:
	Bullet(float x,float y);
	void heartbeat();
};
