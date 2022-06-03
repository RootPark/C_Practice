#include <iostream>
#include <vector>
#include "shapes.h"
using namespace std;
int main() {
	double Twidth,Theight,Rwidth,Rheight;
	vector<Shape*> shapes;
		cin>>Twidth>>Theight;
		cin>>Rwidth>>Rheight;
		shapes.push_back(new Triangle(Twidth,Theight));
		shapes.push_back(new Rectangle(Rwidth,Rheight));
		for(Shape *qshape:shapes){
			cout<<qshape->getArea()<<endl;
		}
		for(Shape *qshape:shapes){
			delete qshape;
		}
	return 0;
}

