#include "Rectangle.h"

Rectangle::Rectangle(double height, double width) {
	this->height = height;
	this->width = width;
}

void Rectangle::draw() {
    printf("*");
    for (int i = 0; i < width - 2; ++i) {
        printf("*");
    }
    printf("*\n");

    // Draw sides
    for (int i = 0; i < height - 2; ++i) {
        printf("*");
        for (int j = 0; j < width - 2; ++j) {
            printf(" ");
        }
        printf("*\n");
    }

    // Draw bottom border
    printf("*");
    for (int i = 0; i < width - 2; ++i) {
        printf("*");
    }
    printf("*\n");
}

double Rectangle::area() {
    return (height * width);

}

