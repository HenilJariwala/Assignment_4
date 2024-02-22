#pragma once

#include "Shape.h"

#include <iostream>
using namespace std;


class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r);
    double area();
    void draw();
};