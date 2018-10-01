#include "point.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;


Point::Point(int a, int b){
	x = a;
	y = b;
	id++;
	
}

//COPY CONSTRUCTOR
Point::Point(const Point& a) {
	this->x = a.x;
	this->y = a.y;
}


// ASSIGNMENT OPERATOR
Point& Point::operator=(const Point& rhs) {
	if(this==&rhs) return *this;
      x=rhs.x;
	  y=rhs.y;
	return *this;
}


void Point::display() {
	cout << "X-coordinate: " << x << endl;
	cout << "Y-coordinate: " << y << endl;
}

void Point::setx (int x) this->x = x;
void Point::sety (int y) this->y = y;
int Point::getX(void) return this->x;
int Point::getY(void) return this->y;
int Point::counter(void) return (this->id-1001);
static int Point::distance(Point& a, Point& b){
	int d =((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y));
	return sqrt(d);
}
int Point::distance(Point& ax) {
	int d =((ax.x-x)*(ax.x-x))+((ax.y-y)*(ax.y-y));
	return sqrt(d);
}




