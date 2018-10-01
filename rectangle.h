Class Rectangle: public Square {
	
	private: 
	double side_b;
	
	public:
	Rectangle(double side_a, double side_b): Square(side_a);
	double area(double s);
	double perimeter(double s);
	void display(void);

}