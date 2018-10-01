#include "shape.h"
#include "point.h"
#include <stdio.h>


//CONSTRUCTOR
Square(double side_a, double side_b): Square(side_a){
	this.side_b = side_b;
}
double area(double s){
	return s*s;
}
double perimeter(double s) {
	
	return 4*s;
}

void display(void) {
	cout << "Rectangle name: " << shapeName << endl;
	cout << "X-coordinate: " << origin.x1 << endl;
	cout << "Y-coordinate: " << origin.y1 << endl;
	cout << "Side a: " << side_a << endl;
		cout << "Side b: " << side_b << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl;
}



	