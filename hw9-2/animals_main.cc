#include <iostream>
#include <vector>
#include <string>
#include "animals.h"

using namespace std;

int main() {
	string put;
	vector<Animal*> animals;
	int age;
	string name;
	int stripes;
	string toy;
	while(1){

		cin>>put;
		if(put=="z"){
			cin>>name>>age>>stripes;
			animals.push_back(new Zebra(name,age,stripes));
		}
		else if(put=="c"){
			cin>>name>>age>>toy;
			animals.push_back(new Cat(name,age,toy));
		}
		else if(put=="0"){
			for(Animal *Anima: animals){
				Anima->printInfo();
			}
			for(Animal *Anima: animals){
				delete Anima;
			}
		}
	}
}