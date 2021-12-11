#include <iostream>
#include <circle.h>

int main() {
    // Создание круга со значениями по умолчанию
    std::cout << "circle 1:" << "\n";
    gm::Circle circle1;
    std::cout << "Координата x центра круга: " << circle1.getOriginPoint().x << '\n' << "Координата y центра круга: " <<
    circle1.getOriginPoint().y << '\n' << "Радиус круга: " << circle1.getRadius() << '\n';

    // Создание круга с правильными значениями и получение периметра, площади и радиуса
    std::cout << "\ncircle 2:" << "\n";
    gm::Circle circle2(gm::Point{2, 4}, 10);

    std::cout << "Периметр: " << circle2.getPerimeter() << '\n';
    std::cout << "Площадь: " << circle2.getSquare() << '\n';
    std::cout << "Радиус: " << circle2.getRadius() << '\n';
    std::cout << "Диаметр: " << circle2.getDiameter() << '\n';

    // Создание круга с неправильными данными и получение радиуса
    // В данном случае выводится сообщение, что введенные данные некорректны, и устанавливается значение по умолчанию
    std::cout << "\ncircle 3:" << "\n";
    gm::Circle circle3(gm::Point{1,1}, -10);

    std::cout << "Радиус: " << circle3.getRadius() << '\n';

    // Создание круга по умолчанию и попытка установить некорректное значение радиуса
    // В данном случае выводится сообщение, что введенные данные некорректны, и устанавливается значение по умолчанию
    std::cout << "\ncircle 4:" << "\n";
    gm::Circle circle4;
    circle4.setRadius(-10);

    std::cout << "Радиус: " << circle4.getRadius() << '\n';

    // Смена точки центра круга
    std::cout << "Координата x центра круга: " << circle4.getOriginPoint().x << '\n';
    std::cout << "Координата y центра круга: " << circle4.getOriginPoint().y << '\n';

    circle4.setOriginPoint(gm::Point{123, 321});
    std::cout << "Смена точки" << '\n';

    std::cout << "Координата x центра круга: " << circle4.getOriginPoint().x << '\n';
    std::cout << "Координата y центра круга: " << circle4.getOriginPoint().y << '\n';

    return 0;
}
