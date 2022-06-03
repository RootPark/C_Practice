#include <iostream>
#include "number.h"
#include "string"

using namespace std;

int main(void) {
	string input;
	int putNum;
	Number Num=Number();
	Square Squ=Square();
	Cube Cb=Cube();
	while(1){
		cin>>input;
		if(input=="number"){
			cin>>putNum;
			Num.setNumber(putNum);
			cout<<"getNumber(): ";
			cout<<Num.getNumber()<<endl;
		}
		else if(input=="square"){
			cin>>putNum;
			Squ.setNumber(putNum);
			cout<<"getNumber():";
			cout<<Num.getNumber()<<endl;
			cout<<"getSquare():";
			cout<<Squ.getSquare()<<endl;
		}
		else if(input=="cube"){
			cin>>putNum;
			Cb.setNumber(putNum);cout<<"getNumber():";
			cout<<Num.getNumber()<<endl;
			cout<<"getSquare():";
			cout<<Squ.getSquare()<<endl;
			cout<<"getCube():";
			cout<<Cb.getCube()<<endl;
		}
		else if(input=="quit"){
			break;
		}
	}
}
