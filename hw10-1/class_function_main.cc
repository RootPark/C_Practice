#include <iostream>
#include "class_function.h"
#include <vector>
#include <string>

using namespace std;
int main() {
	vector<A*> objects;
	while(1){
		string put;
		cin>>put;
		if(put=="B"){
			objects.push_back(new B);
		}
		else if(put=="C"){
			objects.push_back(new C);
		}
		else if(put=="BB"){
			objects.push_back(new BB);
		}
		else if(put=="0"){
			for(A *a:objects){
				a->test1();
				a->test2();
			}
			for(A *a:objects){
				delete a;
			}
			break;
		}
	}
}