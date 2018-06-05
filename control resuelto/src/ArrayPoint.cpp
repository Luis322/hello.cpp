#include "ArrayPoint.h"
#include <iostream>
#include "Point.h"
using namespace std;
ArrayPoint::ArrayPoint()
{
    len = 0;
    Point *data=new Point[len];
}
ArrayPoint::ArrayPoint(ArrayPoint &a)
{
    this->data=a.data;
    this->len=a.len;
}
void ArrayPoint::ingresarPoint(Point m, int pos)
{
    len+=1;

    for(int i=0;i<len;i++){
        if (i==pos){
            data[i]=m;
        }
    }
}
ArrayPoint::~ArrayPoint()
{
    delete []data;
}
