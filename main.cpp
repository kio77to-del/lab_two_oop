#include <iostream>
#include "Point.h"

int main() {
    Point p1;
    Point p2(3, 4);
    Point p3(p2);

    p2.move(2, -1);

    p1.print();
    p2.print();
    p3.print();

    return 0;
}