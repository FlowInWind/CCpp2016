#ifndef PLANES_H
#define PLANES_H
#include <SFML/Graphics.hpp>
#include "Sprite.h"
#include "Gun.h"
#include <iostream>
using std::cout;
using std::endl;
class Planes:public Sprite{
public:
    void fire();
protected:
    Gun gun;
};
#endif // PLANES_H
