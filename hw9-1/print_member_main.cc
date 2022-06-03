#include <iostream>
#include <vector>
#include <string>
#include "print_member.h"

using namespace std;

int main() {
	vector<A*> objects;
	int inputA;
	double inputB;
	string inputC;
	
	cin>>inputA;
	cin>>inputB;
	cin>>inputC;
	
	objects.push_back(new A(inputA));
	objects.push_back(new B(inputB));
	objects.push_back(new C(inputC));
	
	for(A *object: objects){
		object->print();
	}
	for(A *object: objects){
		delete object;
	}
	return 0;
	
}
	