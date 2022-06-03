#define pi 3.141592
using namespace std;
class Shape{
	public:
		virtual double getArea()=0;
		virtual double getPerimeter()=0;
		virtual string getTypeString()=0;
};

class Circle: public Shape{
	public:
		Circle(double radius);
		virtual double getArea();
		virtual double getPerimeter();
		virtual string getTypeString();
	protected:
		double radius_;
};

class Rectangle: public Shape{
	public:
		Rectangle(double height, double width);
		virtual double getArea();
		virtual double getPerimeter();
		virtual string getTypeString();
	protected:
		double height_;
		double width_;
};
