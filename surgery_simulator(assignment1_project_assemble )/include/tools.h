#ifndef POINT_H
#define POINT_H

struct Point {
    double x;
    double y;
};

Point getPointFromUser();
void performScalpelOperation(const Point& start, const Point& end);
void performHemostatOperation(const Point& point);
void performTweezersOperation(const Point& point);
void performSutureOperation(const Point& point1, const Point& point2);

#endif // POINT_H
