#ifndef MYPLANE_H
#define MYPLANE_H
#include <iostream>
#include "Planes.h"
class MyPlane:public Planes{
public:
    MyPlane();
    void left();
    void right();
    void up();
    void down();
    void die();
};

#endif // MYPLANE_H
