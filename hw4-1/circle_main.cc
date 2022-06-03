#include <iostream>
#include "circle.h"
#define pi 3.141592

int main(){
	double num;
	std::cin>>num;
	std::cout<<"Perimeter: "<<getCirclePerimeter(num)<<std::endl;
	std::cout<<"Area: "<<getCircleArea(num)<<std::endl;
	return 0;
}
