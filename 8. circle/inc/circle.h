#pragma once
#include <iostream>
#include <cmath>
#define PI acos(-1)

namespace gm{
    struct Point {
        int x, y;
    };

    class Circle {
    public:
        Circle();

        Circle(Point P, int R);

        int getRadius() const;

        int getDiameter() const;

        Point getOriginPoint() const;

        void setRadius(int R);

        void setOriginPoint(Point P);

        double getSquare() const;

        double getPerimeter() const;

    private:
        Point origin_point{1, 1};
        int radius = 1;

        static bool verifyIncomingData(int &r);
    };
}

