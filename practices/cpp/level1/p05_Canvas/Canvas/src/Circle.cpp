#include "Circle.h"
#include<iostream>
Circle::Circle(float x,float y,float r)
{
    this->x=x;
    this->y=y;
    this->r=r;
}
Circle::~Circle()
{
    //dtor
}
void Circle::draw()
{
    std::cout << "Center Point:(" << this->x << "," << this->y << ");Radius:" << this->r << std::endl;
}
