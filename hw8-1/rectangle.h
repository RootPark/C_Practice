class Rectangle{
	public:
		Rectangle(int height, int width);
		int getWidth() const;
		int getHeight() const;
		int getArea() const;
		int getPerimeter() const;
	private:
		int height_;
		int width_;
};

class Square: public Rectangle{
	public:
		Square (int width);
		void print() const;
};

class NonSquare: public Rectangle{
	public:
		NonSquare(int height, int width);
		void print() const;
};