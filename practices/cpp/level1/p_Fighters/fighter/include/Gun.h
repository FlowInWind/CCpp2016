#ifndef GUN_H
#define GUN_H
#include <iostream>
#include <SFML/Graphics.hpp>
class Planes;
class Gun{
public:
    void setOwner(Planes* owner);
    void fire();
    void enemyfire();
private:
    sf::Vector2f getPosition();
    Planes* owner;
};
#endif // GUN_H
