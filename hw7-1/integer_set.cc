#include <iostream>
#include "integer_set.h"
#include <algorithm>
#include <vector>
using namespace std;

void IntegerSet::AddNumber(int num){
	int a=0;
	for(int i=0; i<numbers_.size();i++){
		if(numbers_[i]==num){
			a++;
		}
		if(a!=0){
			numbers_.push_back(num);
			sort(numbers_.begin(),numbers_.end());
		}
	}
}
IntegerSet::IntegerSet(){
	
}
IntegerSet::~IntegerSet(){
	
}
void IntegerSet::DeleteNumber(int num){
	for(int i=0; i<numbers_.size();i++){
		if(numbers_[i]==num){
			numbers_.erase(numbers_.begin()+i);
		}
	}
}
int IntegerSet::GetItem(int pos)const{
	if(pos>numbers_.size()){
		return -1;
	}
	return numbers_[pos];
}
vector<int> IntegerSet::GetAll()const{
	return numbers_;
}