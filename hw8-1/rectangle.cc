#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(int height, int width){
	height_=height;
	width_=width;
}
int Rectangle::getWidth() const{
	return width_;
}
int Rectangle::getHeight() const{
	return height_;
}
int Rectangle::getArea() const{
	return width_*height_;
}
int Rectangle::getPerimeter() const{
	return 2*(width_+height_);
}
Square::Square(int width):Rectangle(width,width){
	
}
NonSquare::NonSquare(int height, int width):Rectangle(height, width){
	
}
void Square::print() const{
	cout<<getHeight()<<"x"<<getWidth()<<" Square"<<endl;
	cout<<"Area: "<<getArea()<<endl;
	cout<<"Perimeter: "<<getPerimeter()<<endl;
}
void NonSquare::print() const{
	cout<<getHeight()<<"x"<<getWidth()<<" NonSquare"<<endl;
	cout<<"Area: "<<getArea()<<endl;
	cout<<"Perimeter: "<<getPerimeter()<<endl;
}