#include "Shape.h"

void Shape::setPoint(int index, Point *point)
{
    try
    {
        m_points[index] = point;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Point *Shape::getPoint(int index)
{
    return m_points[index];
}

int Shape::getPointCount()
{
    return m_points.size();
}
