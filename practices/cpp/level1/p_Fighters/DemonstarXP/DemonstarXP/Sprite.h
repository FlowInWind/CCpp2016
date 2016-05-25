#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
class Sprite:public sf::Sprite{
public:
    virtual void heartBeat(){};
    void draw();
    bool intersects(Sprite* other);
};
