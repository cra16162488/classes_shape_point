#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Point.h"
#include "Shape.h"

#include <math.h>
#include <vector>

#define PI 3.14159265

class Triangle : public Shape {

public:
    Triangle(std::vector<Point*> points);
    Triangle(Point* p1, Point* p2, Point* p3);

    void setPoints(std::vector<Point*> points);
    void setPoints(Point* p1, Point* p2, Point* p3);
    std::vector<Point*> getPoints();

    bool isRightTriangle();

    float getArea();
};

#endif // TRIANGLE_H
