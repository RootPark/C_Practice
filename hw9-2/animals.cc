#include <iostream>
#include <string>
#include "animals.h"
using namespace std;

void Animal::printInfo(){
	//
}
void Zebra::printInfo(){
	cout<<"Zebra, Name: "<<name<<", Age: "<<age<<", Number of stripes: "<<numStripes<<endl;
}
void Cat::printInfo(){
	cout<<"Cat, Name: "<<name<<", Age: "<<age<<", Favorite toy: "<<favoriteToy<<endl;
}
Animal::Animal(string name_, int age_){
	name=name_;
	age=age_;
}
Zebra::Zebra(string name_, int age_, int numStripes_):Animal(name_,age_){
	numStripes=numStripes_;
}
Cat::Cat(string name_, int age_, string favoriteToy_):Animal(name_,age_){
	favoriteToy=favoriteToy_;
}