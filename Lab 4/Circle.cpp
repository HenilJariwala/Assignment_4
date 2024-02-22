
#include "Circle.h"

Circle::Circle(double r) {
	this->radius = r;
}
double Circle::area() {
	return (3.14*radius*radius);
}
void draw() {

	printf("	* *\n");
	printf("  *    *	\n");
	printf(" *       *\n");
	printf(" *        *\n");
	printf("  *      * \n");
	printf("   *    *  \n");
	printf("     * * \n ");
}
