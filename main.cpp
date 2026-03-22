#include <iostream>
#include "Point.h"
#include "ColoredPoint.h"

int main() {
    std::cout << "=== Point objects ===" << std::endl;
    Point p1;
    Point p2(3, 4);
    Point p3(p2);

    p2.move(2, -1);
    p2.print();
    p3.print();

    std::cout << std::endl;
    std::cout << "=== ColoredPoint objects ===" << std::endl;
    ColoredPoint cp1;
    ColoredPoint cp2(10, 20, "red");
    ColoredPoint cp3(cp2);

    cp2.print();
    cp3.print();

    std::cout << std::endl;
    std::cout << "=== Dynamic objects ===" << std::endl;
    Point* p4 = new Point(7, 8);
    p4->print();
    delete p4;

    std::cout << std::endl;
    std::cout << "=== Base pointer to child object ===" << std::endl;
    Point* p5 = new ColoredPoint(1, 2, "blue");
    p5->print();
    delete p5;

    return 0;
}