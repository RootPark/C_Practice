#include <iostream>
#include <string>
#include "print_info.h"
using namespace std;

string A::getTypeInfo(){
	string str="This is an instance of class A";
	return str;
	
}
string B::getTypeInfo(){
	string str="This is an instance of class B";
	return str;
}
string C::getTypeInfo(){
	string str="This is an instance of class C";
	return str;
}
