#include "shape.h"
#include "point.h"
#include <stdio.h>


//CONSTRUCTOR
Square(Shape p, double side_a): Shape(p){
	this.side_a = side_a;
}
double area(double s){
	return s*s;
}
double perimeter(double s) {
	
	return 4*s;
}

void display(void) {
	cout << "Shapename: " << shapeName << endl;
	cout << "X-coordinate: " << origin.x1 << endl;
	cout << "Y-coordinate: " << origin.y1 << endl;
	cout << "Side a: " << side_a << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl;
}



	