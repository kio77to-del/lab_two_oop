#include <iostream>
#include "Line.h"

Line::Line() : start(0, 0), end(0, 0) {
    std::cout << "Line(): created line" << std::endl;
}

Line::Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {
    std::cout << "Line(int, int, int, int): created line" << std::endl;
}

Line::~Line() {
    std::cout << "~Line(): destroyed line" << std::endl;
}

void Line::print() const {
    std::cout << "Line points:" << std::endl;
    start.print();
    end.print();
}