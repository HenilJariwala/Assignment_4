#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "BMW.h"
#include "Mazda.h"
#include "Function.h"

int main() {
    Rectangle rectangle(5, 3);
    Circle circle(4);
    BMW bmw;
    Mazda mazda;

    drawShape(circle);
    drawShape(rectangle);
    drawVehicle(bmw);
    drawVehicle(mazda);

    driveVehicle(bmw);
    driveVehicle(mazda);

    
}
