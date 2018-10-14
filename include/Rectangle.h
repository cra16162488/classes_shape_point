#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Quadrilateral.h"
#include "Triangle.h"
#include "Point.h"
#include <vector>

class Rectangle : public Quadrilateral
{

public:
    Rectangle(std::vector<Point*> points);
    Rectangle(Point* p1, Point* p2, Point* p3, Point* p4);

    bool isSquare();
};

#endif // RECTANGLE_H
