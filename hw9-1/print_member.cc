#include <iostream>
#include "print_member.h"
#include <string>
using namespace std;

A::A(int a){
	memberA=new int(a);
	cout<<"new memberA"<<endl;
}

B::B(double b):A(1){
	memberB=new double(b);
	cout<<"new memberB"<<endl;
}

C::C(string c):B(1.1){
	memberC=new string(c);
	cout<<"new memberC"<<endl;
}
A::~A(){
	delete memberA;
	cout<<"delete memberA"<<endl;
}
B::~B(){
	delete memberB;
	cout<<"delete memberB"<<endl;
}
C::~C(){
	delete memberC;
	cout<<"delete memberC"<<endl;
}
void A::print(){
	cout<<"*memberA"<< *memberA<<endl;
}
void B::print(){
	A::print();
	cout<<"*memberB"<< *memberB<<endl;
}
void C::print(){
	B::print();
	cout<<"*memberC"<< *memberC<<endl;
}
