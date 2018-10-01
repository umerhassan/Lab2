class Shape {
	
	protected: 
	Point origin;
	char* shapeName;
	
	public:
	Shape(Point o, char* s);
	~Shape();
	Shape& operator=(const Shape& rhs);
	Point& getOrigin(void) const ;
	char* getName(void) const ;
	void display(void);
	double distance (Shape& other);
	static double distance (Shape& the_shape, Shape& other);
	void move (double dx, double dy);
}