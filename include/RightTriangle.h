#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"
#include "Point.h"
#include <math.h>
#include <vector>

class RightTriangle : public Triangle
{
public:
    RightTriangle(std::vector<Point*> points);
    RightTriangle(Point* p1, Point* p2, Point* p3);
};

#endif // RIGHTTRIANGLE_H
