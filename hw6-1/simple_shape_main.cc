#include <iostream>
#include "simple_shape.h"
#define pi 3.14

using namespace std;
int main(void) {
	Wide a_wide;
	while(1){
		char shape;
		int a,b,c,d;
		cout<<"shape?"<<endl;
		cin>>shape;
		if(shape=='C'){
			cin>> a>> b>> c;
			a_wide.CircleArea(a,b,c);
			a_wide.CirclePerimeter(a,b,c);
		}
		else if(shape=='R'){
			cin>> a>> b>> c>>d;
			a_wide.SquareArea(a,b,c,d);
			a_wide.SquarePerimeter(a,b,c,d);
		}
		else if(shape=='Q'){
			break;
		}
	}
}