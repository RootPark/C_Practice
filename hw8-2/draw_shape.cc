#include <iostream>
#include "draw_shape.h"

using namespace std;

Shape::Shape(){
	width_=0;
	height_=0;
}
Shape::Shape(int x,int y,int height, int width, char brush){
	x_=x;
	y_=y;
	height_=height;
	width_=width;
	brush_=brush;

}
double Shape::GetArea(){
	//
}
int Shape::GetPerimeter(){
	//
}
void Shape::Draw(int canvas_width, int canvas_height){
	//
}


Square::Square():Shape(){
	//
}
Square::Square(int x_, int y_, int width_, char brush_):Shape(x_, y_, width_, width_, brush_){
	
}
Rectangle::Rectangle():Shape(){
	
}
Rectangle::Rectangle(int x_, int y_, int height_, int width_, char brush_):Shape(x_,y_,height_,width_,brush_){
}
Diamond::Diamond():Shape(){
	
}
Diamond::Diamond(int x_, int y_, int dist_, char brush_):Shape(x_, y_, 2*dist_+1, 2*dist_+1,brush_){
}



double Square::GetArea(){
	return width_*width_;
}
int Square::GetPerimeter(){
	return 4*width_;
}
void Square::Draw(int canvas_width, int canvas_height){
	int xps=0;
	int yps=0;
	int play=0;
	
	for(int i=0; i<canvas_width;i++){
		cout<<i;
	}
	cout<<endl;
	for(int i=0; i<canvas_height;i++){
		cout<<i;
		for(int j=0; j<canvas_width;j++){
			if(j == x_+xps && i == y_+yps){
				cout<<brush_;
				if(xps<width_-1){
					xps++;
				}
				play=1;
				}
				else{
					cout<<".";
			}
		}
	}
		cout<<endl;
		xps=0;
		if(yps<height_-1 && play==1){
			yps++;
			play=0;
		}
	}




double Rectangle::GetArea(){
	return width_*height_;
}
int Rectangle::GetPerimeter(){
	return 2*(width_+height_);
}
void Rectangle::Draw(int canvas_width, int canvas_height){
	int xps=0;
	int yps=0;
	int play=0;
	for(int i=0;i<canvas_width;i++){
		cout<< i<<endl;
	}
	for(int i=0;i<canvas_height;i++){
		cout<<i;
		for(int j=0;j<canvas_width;j++){
			if(j==x_+xps && i==y_+yps){
				cout<<brush_;
				if(xps<width_-1){
					xps++;
				}
				play=1;
			}
			else cout<<".";
		}
		cout<<endl;
		xps=0;
		if(yps<height_-1 && play==1){
			yps++;
			play=0;
		}
	}
}



double Diamond::GetArea(){
	return (height_*width_)/2.0;
}
int Diamond::GetPerimeter(){
	return 4*(height_+1);
}
void Diamond::Draw(int canvas_width, int canvas_height){
	int dist=(width_-1)/2;
	int k=1;
	int c=0;
	char** Arr=new char*[canvas_height];
	for(int i=0; i<canvas_width;i++){
		Arr[i]=new char[canvas_width];
}
	for(int i=0; i<canvas_height;i++){
		for(int j=0; j<canvas_width;j++){
			Arr[i][j]='.';
		}
		for(int i=0;i<height_;i++){
			if(i<dist){
				for(int j=c;j<k;j++){
					if(y_+i>=canvas_height || x_+j>=canvas_width){
						continue;
					}
					Arr[y_+i][x_+j]=brush_;
				}
				c=c+1;
				k=k-1;
			}
			else if(i>=dist){
				for(int j=c;j<k;j++){
					if(y_+i>=canvas_height || x_+j>=canvas_width){
						continue;
					}
					Arr[y_+i][x_+j]=brush_;
				}
				c=c+1;
				k=k-1;
			}
		}
		for(int i=0;i<canvas_width;i++){
			cout<<i;
		}
		cout<<endl;
		for(int i=0;i<canvas_height;i++){
			cout<<i;
			for(int j=0;j<canvas_width;j++){
				cout<<Arr[i][j];
			}
			cout<<endl;
		}
	}
}