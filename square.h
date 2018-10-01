Class Square: public Shape {
	
	protected: 
	double side_a;
	
	public:
	Square(Shape p, double side_a): Shape(p);
	double area(double s);
	double perimeter(double s);
	
	void display(void);

}