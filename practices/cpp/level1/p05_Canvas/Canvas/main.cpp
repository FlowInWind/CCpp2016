#include <iostream>
#include "Rect.h"
#include "Circle.h"
using namespace std;
int main()
{
    Rect rect(1,2,3,4);
    Circle circle(5,1,3);
    rect.draw();
    circle.draw();
    return 0;
}
