#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "BMW.h"
#include "Mazda.h"

void drawShape(Shape& shape) {
	shape.draw();
}

void drawVehicle(Vehicle& vehicle) {
	vehicle.draw();
}

void driveVehicle(Vehicle& vehicle) {
	vehicle.drive();
}