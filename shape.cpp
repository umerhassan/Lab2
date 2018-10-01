#include "shape.h"
#include "point.h"
#include <stdio.h>


//CONSTRUCTOR
Shape(Point o, char* s){
	this.origin = o;
	this.shapeName = s;
}

//DESTRUCTOR
Shape::~Shape(){
	delete [] shapeName;
}


//COPY CONSTRUCTOR
Shape::Shape(const Shape& source):origin(source.origin), shapeName(new
char[strlen(source.shapeName)+1]) {
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, source.shapeName);
}

// ASSIGNMENT OPERATOR
Shape& Shape::operator=(const Shape& rhs) {
	if(this==&rhs)
		return *this;
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeName)+1];
	
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	
return *this;

}

char* getName(void) const {
	return shapeName;
}

Point& getOrigin(void) const ;
	return origin;
}

void display(void) {
	cout << "Shapename: " << shapeName << endl;
	cout << "X-coordinate: " << origin.x1 << endl;
	cout << "Y-coordinate: " << origin.y1 << endl;

}

double distance (Shape& other){
	double d =((origin.x-other.origin.x)*(origin.x-other.origin.x))+((origin.y-other.origin.y)*(origin.y-other.origin.y));
	return sqrt(d);
}

static double distance (Shape& the_shape, Shape& other){
	double d =((the_shape.x-other.origin.x)*(the_shape.x-other.origin.x))+((the_shape.y-other.origin.y)*(the_shape.y-other.origin.y));
	return sqrt(d);
}

void move (double dx, double dy){
	origin.x=origin.x+dx;
	origin.y=origin.y+dy;
}



	