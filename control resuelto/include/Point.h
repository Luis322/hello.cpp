#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(float,float);
        float getx();
        float gety();
        void setx(float);
        void sety(float);


    private:
        float _x;
        float _y;
};

#endif // POINT_H
