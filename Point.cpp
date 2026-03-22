#include <iostream>
#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
    std::cout << "Point(): created point (" << x << ", " << y << ")" << std::endl;
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
    std::cout << "Point(int, int): created point (" << this->x << ", " << this->y << ")" << std::endl;
}

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    std::cout << "Point copy constructor: copied point (" << x << ", " << y << ")" << std::endl;
}

Point::~Point() {
    std::cout << "~Point(): destroyed point (" << x << ", " << y << ")" << std::endl;
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
    std::cout << "move(): point moved to (" << x << ", " << y << ")" << std::endl;
}

void Point::print() const {
    std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
}