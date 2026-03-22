#include <iostream>
#include "ColoredPoint.h"

ColoredPoint::ColoredPoint() : Point() {
    color = "white";
    std::cout << "ColoredPoint(): created colored point, color = " << color << std::endl;
}

ColoredPoint::ColoredPoint(int x, int y, const std::string& color) : Point(x, y) {
    this->color = color;
    std::cout << "ColoredPoint(int, int, string): created colored point, color = " << this->color << std::endl;
}

ColoredPoint::ColoredPoint(const ColoredPoint& other) : Point(other) {
    color = other.color;
    std::cout << "ColoredPoint copy constructor: copied colored point, color = " << color << std::endl;
}

ColoredPoint::~ColoredPoint() {
    std::cout << "~ColoredPoint(): destroyed colored point, color = " << color << std::endl;
}

void ColoredPoint::setColor(const std::string& newColor) {
    color = newColor;
}

std::string ColoredPoint::getColor() const {
    return color;
}

void ColoredPoint::print() const {
    Point::print();
    std::cout << "Color: " << color << std::endl;
}