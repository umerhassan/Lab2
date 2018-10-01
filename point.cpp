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


void display() {
	cout << "X-coordinate: " << x << endl;
	cout << "Y-coordinate: " << y << endl;
}

void setX (int x) this->x = x;
void setY (int y) this->y = y;
int getX(void) return this->x;
int getY(void) return this->y;
int counter(void) return (this->id-1001);
int distance(Point& a, Point& b){
	int d =((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y));
	return sqrt(d);
}
static int distance(Point& ax) {
	int d =((ax.x-x)*(ax.x-x))+((ax.y-y)*(ax.y-y));
	return sqrt(d);
}




