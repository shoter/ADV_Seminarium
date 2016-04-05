#pragma once

class Vector
{
    double x;
    double y;
public :
    Vector(double x, double y) : x(x), y(y) {}

    double operator * (const Vector &other) const
    {
        return x * other.y + y * other.y;
    }
};
