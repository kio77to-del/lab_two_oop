#include <iostream>
#include "Point.h"
#include "ColoredPoint.h"
#include "Line.h"
#include "PointerLine.h"

using namespace std;

int main() {
    cout << "=== Point objects ===" << endl;
    Point p1;
    Point p2(3, 4);
    Point p3(p2);

    p2.move(2, -1);
    p2.print();
    p3.print();

    cout << endl;

    cout << "=== ColoredPoint objects ===" << endl;
    ColoredPoint cp1;
    ColoredPoint cp2(10, 20, "red");
    ColoredPoint cp3(cp2);

    cp2.print();
    cp3.print();

    cout << endl;

    cout << "=== Dynamic objects ===" << endl;
    Point* p4 = new Point(7, 8);
    p4->print();
    delete p4;

    cout << endl;

    cout << "=== Base pointer to child object ===" << endl;
    ColoredPoint realChild(1, 2, "blue");
    Point* basePtr = &realChild;
    basePtr->print();

    cout << endl;

    cout << "=== Composition with objects ===" << endl;
    Line line1(0, 0, 5, 5);
    line1.print();

    cout << endl;

    cout << "=== Copy of line object ===" << endl;
    Line line2(line1);
    line2.move(1, 1);
    line1.print();
    line2.print();

    cout << endl;

    cout << "=== Composition with pointer ===" << endl;
    PointerLine pl1(2, 2, 8, 8);
    pl1.print();

    cout << endl;

    cout << "=== Deep copy of pointer line ===" << endl;
    PointerLine pl2(pl1);
    pl2.move(3, 0);
    pl1.print();
    pl2.print();

    cout << endl;

    cout << "=== Copy object and copy pointer ===" << endl;
    Point obj1(100, 100);
    Point obj2 = obj1;

    obj1.move(5, 5);
    cout << "obj1:" << endl;
    obj1.print();
    cout << "obj2:" << endl;
    obj2.print();

    cout << endl;

    Point* ptr1 = new Point(50, 50);
    Point* ptr2 = ptr1;

    ptr1->move(10, 0);
    cout << "ptr1:" << endl;
    ptr1->print();
    cout << "ptr2:" << endl;
    ptr2->print();

    delete ptr1;
    ptr2 = nullptr;

    return 0;
}