#include "circle.h"

namespace gm {
    Circle::Circle() = default;

    Circle::Circle(Point P, int R) {

        if (not verifyIncomingData(R)) {
            std::cout << "Введены некорректные данные, они заменены на значения по умолчанию. "
                         "Для замены используйте методы setRadius и setOriginPoint.\n";
        } else
            radius = R;
        origin_point = P;
    }

    int Circle::getRadius() const {
        return radius;
    }

    Point Circle::getOriginPoint() const {
        return origin_point;
    };

    void Circle::setRadius(int R) {
        if (verifyIncomingData(R)) {
            radius = R;
        } else
            std::cout << "Введены некорректные данные, они заменены на значения по умолчанию.\n";
    }

    void Circle::setOriginPoint(Point P) {
        origin_point = P;
    };

    double Circle::getSquare() const {
        return PI * radius * radius;
    }

    double Circle::getPerimeter() const {
        return 2 * PI * radius;
    }

    bool Circle::verifyIncomingData(int &r) {
        if (r < 0)
            return false;
        return true;
    }

    int Circle::getDiameter() const {
        return 2 * radius;
    }
}