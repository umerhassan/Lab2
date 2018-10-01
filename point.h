
class Point {
	
	
	protected:
	static int id;
	int x;
	int y;
	
	public:
	Point(int a, int b); //COnstructor
	Point(const Point&); // Copy constructor
	Point& operator=(const Point&); //Assignment operator
	~Point(); //Destructor
	
	void display(void);
	void setx(int x);
	void setY(int y);
	int getX(void);
	int getY(void);
	int counter(void);
	 int distance(const Point& ax); //always pass as a reference so you don;t have to copy
	static int distance(Point& a, Point& b);
	
};
