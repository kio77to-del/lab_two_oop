#include <iostream>
#include "Point.h"
#include "ColoredPoint.h"

int main() {
    Point p1;
    Point p2(3, 4);
    Point p3(p2);

    p2.move(2, -1);

    p1.print();
    p2.print();
    p3.print();

    std::cout << std::endl;
    std::cout << "=== ColoredPoint objects ===" << std::endl;

    ColoredPoint cp1;
    ColoredPoint cp2(10, 20, "red");
    ColoredPoint cp3(cp2);

    cp2.print();
    cp3.print();

    return 0;
}