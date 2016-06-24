#include "Sprite.h"
#include "Scene.h"
void Sprite::draw(){
    Scene::getInstance()->getWindow()->draw(*this);
}
bool Sprite::intersects(Sprite* other){
    bool t = this->getGlobalBounds().intersects(other->getGlobalBounds());
    return t;
}
