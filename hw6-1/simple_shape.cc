#include <iostream>
#include "simple_shape.h"
#include <stdlib.h>
#define pi 3.14

using namespace std;
void Wide::CircleArea(int a,int b,int r){
	cout<<"area: "<<r*r*pi;
}
void Wide::CirclePerimeter(int a,int b,int r){
	cout<<", perimeter: "<<2*r*pi<<endl;
}
void Wide::SquareArea(int lx,int ly,int rx,int ry){
	int x= abs(abs(lx)-abs(rx));
	int y= abs(abs(ly)-abs(ry));
	cout<<"area: "<<x*y;
}
void Wide::SquarePerimeter(int lx, int ly,int rx, int ry){
	int x= abs(abs(lx)-abs(rx));
	int y= abs(abs(ly)-abs(ry));
	cout<<", perimeter: "<<2*x+2*y<<endl;
}
