#include <iostream>
#include <vector>
#include <string>
#include "print_shape.h"

using namespace std;
int main() {
	vector<Shape*> shapes;
	string put;
	double Rad,Hight,Width;
	while(1){
		cin>>put;
		if(put=="c"){
			cin>>Rad;
			shapes.push_back(new Circle(Rad));
		}
		else if(put=="r"){
			cin>>Hight>>Width;
			shapes.push_back(new Rectangle(Hight,Width));
		}
		else if(put=="0"){
			for(Shape* S:shapes){
					cout<<S->getTypeString()<<", ";
					cout<<S->getArea()<<", ";
					cout<<S->getPerimeter()<<endl;
				}
				for(Shape* S:shapes){
					delete S;
				}
				break;
		}
	}
}
