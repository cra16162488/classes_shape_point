#include "Rectangle.h"

Rectangle::Rectangle(std::vector<Point*> points)
: Quadrilateral(points)
{
    if (!isRectangle())
        throw std::runtime_error("Not a rectangle");
}

Rectangle::Rectangle(Point* p1, Point* p2, Point* p3, Point* p4)
: Quadrilateral(p1, p2, p3, p4)
{
    if (!isRectangle())
        throw std::runtime_error("Not a rectangle");
}

bool Rectangle::isSquare()
{
    float s1, s2, s3, s4;

    s1 = sqrt(pow(m_points[0]->getY()-m_points[1]->getY(), 2) +
              pow(m_points[0]->getX()-m_points[1]->getX(), 2));
    s2 = sqrt(pow(m_points[1]->getY()-m_points[2]->getY(), 2) +
              pow(m_points[1]->getX()-m_points[2]->getX(), 2));
    s3 = sqrt(pow(m_points[2]->getY()-m_points[3]->getY(), 2) +
              pow(m_points[2]->getX()-m_points[3]->getX(), 2));
    s4 = sqrt(pow(m_points[3]->getY()-m_points[0]->getY(), 2) +
              pow(m_points[3]->getX()-m_points[0]->getX(), 2));

    if (isRectangle() && s1 == s2 && s2 == s3 && s3 == s4)
        return true;
    return false;
}
