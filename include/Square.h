#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Rectangle.h"
#include "Point.h"
#include <vector>

class Square : public Rectangle
{

public:
    Square(std::vector<Point*> points);
    Square(Point* p1, Point* p2, Point* p3, Point* p4);
};

#endif // SQUARE_H
