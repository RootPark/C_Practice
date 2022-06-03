#include <iostream>
#include <cstddef>
#include "draw_shape.h"

using namespace std;

Canvas::Canvas(const size_t row, const size_t col){
	this->row=row;
	this->col=col;
	CanArr=new char*[row];
	for(int i=0; i<row;i++){
		CanArr[i]=new char[col];
	}
	Clear();
}

void Canvas::Resize(const size_t row,const size_t col){
	delete[] CanArr;
	this->row=row;
	this->col=col;
	CanArr=new char*[row];
	for(int i=0;i<row;i++){
		CanArr[i]=new char[col];
	}
	Clear();
}

bool Canvas::DrawPixel(const int x, const int y, const char brush){
	if(x>=this->col || y>=this->row){
		return false;
	}
	CanArr[y][x]=brush;
	return true;
}

void Canvas::Print()const{
	cout<<" ";
	for(int i=0;i<col;i++){
		cout<<i%10;
	}
	cout<<endl;
	for(int i=0;i<row;i++){
		cout<<i%10;
		for(int j=0;j<col;j++){
			cout<<CanArr[i][j];
		}
		cout<<endl;
	}
}

void Canvas::Clear(){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			DrawPixel(j, i, '.');
		}
	}
}

Shape::Shape(int x,int y,int height,int width,char brush){
	this->x=x;
	this->y=y;
	this->height=height;
	this->width=width;
	this->brush=brush;
}

void Rectangle::Draw(Canvas *canvas)const{
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			canvas->DrawPixel(x+j,y+i,brush);
		}
	}
}

void UpTriangle::Draw(Canvas* canvas)const{
	int xps=x;
	int k=1;
	for(int i=0;i<height;i++){
		for(int j=0;j<k;j++){
			canvas->DrawPixel(xps+j,y+i,brush);
		}
		xps--;
		k=k+2;
	}
}

void DownTriangle::Draw(Canvas* canvas)const{
	int xps=x;
	int k=1;
	for(int i=0;i>-height;i--){
		for(int j=0;j<k;j++){
			canvas->DrawPixel(xps+j,y+j,brush);
		}
		xps--;
		k=k+2;
	}
}

void Diamond::Draw(Canvas* canvas)const{
	int xps=x;
	int k=1;
	for(int i=0;i<height;i++){
		for(int j=0;j<k;j++){
			canvas->DrawPixel(xps+j,y+i,brush);
		}
		if(i<height/2){
			k=k+2;
			xps--;
		}
		else{
			k=k-2;
			xps++;
		}
	}
}

void Rectangle::printInfo()const{
	cout<<"rect "<<x<<" "<<y<<" "<<height<<" "<<width<<" "<<brush<<endl;
}

void UpTriangle::printInfo()const{
	cout<<"tri_up "<<x<<" "<<y<<" "<<height<<" "<<brush<<endl;
}

void DownTriangle::printInfo()const{
	cout<<"tri_down "<<x<<" "<<y<<" "<<height<<" "<<brush<<endl;
}

void Diamond::printInfo()const{
	cout<<"diamond "<<x<<" "<<y<<" "<<height/2<<" "<<brush<<endl;
}

