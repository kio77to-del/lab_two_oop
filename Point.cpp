#include <iostream>
#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}

void Point::setX(int value) {
    x = value;
}

void Point::setY(int value) {
    y = value;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::move(int dx, int dy) {
    x += dx;
    y += dy;
}

void Point::print() const {
    std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
}