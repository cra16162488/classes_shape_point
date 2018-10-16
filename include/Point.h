#ifndef POINT_H
#define POINT_H

#include <math.h>

class Point
{
public:
    Point(float x, float y);

    void setPosition(float x, float y);

    float getDistance(Point* point) const;

    void  setX(float x);
    void  setY(float y);
    float getX();
    float getY();

private:
    float m_x;
    float m_y;
};

#endif // POINT_H
