class Canvas { 
	public:
		Canvas(const size_t row, const size_t col);
		~Canvas(){};
		// Canvas 크기를 입력받은 크기로 재조절한다.
		void Resize(const size_t row, const size_t col);
		// (x,y) 위치에 brush 문자를 그린다.
		// 범위 밖의 x,y 좌표가 들어올 경우 false 를 리턴한다. 
		bool DrawPixel(const int x, const int y, const char brush); 
		//캔버스의 내용을 화면에 출력한다.
		void Print() const;
		// 그려진 내용을 모두 지운다 ('.'으로 초기화)
		void Clear();
	private:
		char** CanArr;
		int row,col;
};
class Shape {
	public:
		Shape(int height,int width,int x,int y,char brush); 
		virtual void Draw(Canvas* canvas) const {}; 
		virtual void printInfo() const {};
	protected:
		int height,width,x,y;
		char brush;
// 도형의 공통 속성을 정의.
};
class Rectangle : public Shape { 
	/* 필요한 멤버를 정의 */ 
	public:
		Rectangle(int x,int y,int height,int width,char brush): Shape(x,y,height,width,brush){};
		void Draw(Canvas* canvas)const;
		void printInfo()const;
};

class UpTriangle : public Shape { 
	/* 필요한 멤버를 정의 */ 
	public:
		UpTriangle(int x,int y,int height,char brush): Shape(x,y,height,(2*height)-1,brush){};
		void Draw(Canvas* canvas)const;
		void printInfo()const;
};
class DownTriangle : public Shape { 
	/* 필요한 멤버를 정의 */ 
	public:
		DownTriangle(int x,int y,int height,char brush): Shape(x,y,height,(2*height)-1,brush){};
		void Draw(Canvas* canvas)const;
		void printInfo()const;
};
class Diamond : public Shape { 
	/* 필요한 멤버를 정의 */ 
	public:
		Diamond(int x,int y,int distance,char brush): Shape(x,y,(2*distance)+1,(2*distance)+1,brush){};
		void Draw(Canvas* canvas)const;
		void printInfo()const;
};