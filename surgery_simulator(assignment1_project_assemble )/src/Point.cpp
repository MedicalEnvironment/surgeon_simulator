#include <iostream>
#include "tools.h"

Point getPointFromUser() {
    Point p;
    std::cout << "Enter x coordinate: ";
    std::cin >> p.x;
    std::cout << "Enter y coordinate: ";
    std::cin >> p.y;
    return p;
}

void performScalpelOperation(const Point& start, const Point& end) {
    std::cout << "Scalpel operation: Cut made from (" << start.x << ", " << start.y
              << ") to (" << end.x << ", " << end.y << ")" << std::endl;
}

void performHemostatOperation(const Point& point) {
    std::cout << "Hemostat operation: Clamp made at (" << point.x << ", " << point.y << ")" << std::endl;
}

void performTweezersOperation(const Point& point) {
    std::cout << "Tweezers operation: Applied at (" << point.x << ", " << point.y << ")" << std::endl;
}

void performSutureOperation(const Point& point1, const Point& point2) {
    std::cout << "Suture operation: Suture made between (" << point1.x << ", " << point1.y
              << ") and (" << point2.x << ", " << point2.y << ")" << std::endl;
}
