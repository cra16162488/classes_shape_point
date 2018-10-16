#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"
#include <vector>
#include <stdexcept>
#include <iostream>

class Shape 
{
public:
    void   setPoint(int index, Point *point);
    Point  *getPoint(int index);
    int    getPointCount();

    virtual float getArea()      = 0;
    float   getPerimeter();

protected:
    std::vector<Point*> m_points;
};

#endif // SHAPE_H
