#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Shape.h"
#include "Triangle.h"
#include <math.h>

class Quadrilateral : public Shape
{
public:
    Quadrilateral(std::vector<Point*> points);
    Quadrilateral(Point* p1, Point* p2, Point* p3, Point* p4);

    void setPoints(std::vector<Point*> points);
    void setPoints(Point* p1, Point* p2, Point* p3, Point* p4);
    std::vector<Point*> getPoints();

    bool isRectangle();

    float getPerimeter();
    float getArea();
};

#endif // QUADRILATERAL_H
