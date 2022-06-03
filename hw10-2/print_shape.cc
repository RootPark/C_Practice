#include <iostream>
#include "print_shape.h"
#define pi 3.141592
using namespace std;


Circle::Circle(double radius){
	radius_=radius;
}
double Circle::getArea(){
	return radius_*radius_*pi;
}
double Circle::getPerimeter(){
	return radius_*2*pi;
}
string Circle::getTypeString(){
	return "Circle";
}
Rectangle::Rectangle(double height, double width){
	height_=height;
	width_=width;
}
double Rectangle::getArea(){
	return height_*width_;
}
double Rectangle::getPerimeter(){
	return (height_+width_)*2;
}
string Rectangle::getTypeString(){
	return "Rectangle";
}
