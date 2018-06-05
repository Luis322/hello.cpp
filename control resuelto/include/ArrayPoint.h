#ifndef ARRAYPOINT_H
#define ARRAYPOINT_H
#include "Point.h"

class ArrayPoint
{
    public:
        ArrayPoint();
        ArrayPoint(ArrayPoint &a);
        void ingresarPoint(Point m, int pos);
        void eliminarPoint(int pos);

        virtual ~ArrayPoint();

    private:
        int len;
        Point *data;
};

#endif // ARRAYPOINT_H
