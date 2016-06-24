#ifndef ENEMY_H
#define ENEMY_H
#include "Planes.h"
class Enemy:public Planes{
public:
    Enemy();
    void heartBeat();
    void hit();
    bool isdead();
    void fire();
private:
    int state=0;
};

#endif // ENEMY_H
