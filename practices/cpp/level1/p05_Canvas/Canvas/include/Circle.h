#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle:public Shape{
public:
    Circle(float x,float y,float r);
    ~Circle();
    void draw();
private:
    float x,y,r;
};

#endif // CIRCLE_H
