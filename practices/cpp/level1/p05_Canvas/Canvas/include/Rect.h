#ifndef RECT_H
#define RECT_H
#include "Shape.h"
class Rect:public Shape{
public:
    Rect(float x,float y,float a,float b);
    ~Rect();
    void draw();
private:
    float x,y,a,b;
};
#endif // RECT_H
