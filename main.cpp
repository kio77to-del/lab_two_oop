#include <iostream>
#include "Point.h"

int main() {
    Point p;
    p.print();

    p.setX(3);
    p.setY(4);
    p.print();

    p.move(2, -1);
    p.print();

    return 0;
}