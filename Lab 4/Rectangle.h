#pragma once


#include "Shape.h"

#include <iostream>
using namespace std;


class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h);
    double area();
    void draw();
};