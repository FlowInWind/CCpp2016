#include "Rect.h"
#include<iostream>
Rect::Rect(float x,float y,float a,float b)
{
    this->x=x;
    this->y=y;
    this->a=a;
    this->b=b;
}

Rect::~Rect()
{
    //dtor
}

void Rect::draw()
{
     std::cout << "Center Point:(" << this->x << "," << this->y << ");Length:" << this->a << ";Width:" << this->b << std::endl;
}
