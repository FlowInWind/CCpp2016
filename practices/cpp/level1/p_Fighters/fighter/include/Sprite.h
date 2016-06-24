#ifndef SPRITE_H
#define SPRITE_H
#include <iostream>
#include <SFML/Graphics.hpp>
class Sprite:public sf::Sprite{
public:
    virtual void heartBeat(){};
    void draw();
    bool intersects(Sprite* other);
};
#endif // SPRITE_H
