#include "Point.h"
using namespace std;
Point::Point()
{
    _x=0;
    _y=0;
}
Point::Point(float x,float y)
{
    _x=x;
    _y=y;
}
float Point::getx()
{
    return _x;
}
float Point::gety()
{
    return _y;
}
void Point::setx(float m)
{
    _x = m;
}
void Point::sety(float m)
{
    _x = m;
}

