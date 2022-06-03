class Shape{
	public:
		Shape();
		Shape(int x, int y, int height, int width, char brush);
		
		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);
	protected:
		int x_;
		int y_;
		int height_;
		int width_;
		char brush_;
};

class Square: public Shape{
	public:
		Square();
		Square(int x,int y ,int width,char brush);
		
		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);
};

class Rectangle: public Shape{
	public:
		Rectangle();
		Rectangle(int x,int y,int height, int width,char brush);
		
		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);
};

class Diamond: public Shape{
	public:
		Diamond();
		Diamond(int x,int y,int dist,char brush);
		
		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);
};


