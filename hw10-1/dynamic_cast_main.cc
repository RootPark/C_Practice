#include <iostream>
#include <string>
#include <vector>
#include "dynamic_cast.h"
using namespace std;
int main() {
	string put;
	vector<B*> objects;
	while(1){
		cin>>put;
		if(put=="B"){
			objects.push_back(new B);
		}
		else if(put=="C"){
			objects.push_back(new C);
		}
		else if(put=="D"){
			objects.push_back(new D);
		}
		else if(put=="0"){
			break;
		}
	}
	
	for(B* b:objects){
		if(dynamic_cast<D*> (b)!=nullptr){
			dynamic_cast<D*> (b)->test_D();
		}
		else if(dynamic_cast<C*> (b)!=nullptr){
			dynamic_cast<C*> (b)->test_C();
		}
		else {
			continue;
		}
	}
	return 0;
}

