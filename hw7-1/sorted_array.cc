#include "sorted_array.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

SortedArray::SortedArray(){
}

SortedArray::~SortedArray(){	
}

void SortedArray::AddNumber(int num){
	numbers_.push_back(num);
	sort(numbers_.begin(),numbers_.end());
}

vector<int> SortedArray::GetSortedAscending()const{
	vector<int> v=numbers_;
	return v;
}
vector<int> SortedArray::GetSortedDescending()const{
	vector<int> v=numbers_;
	int length=v.size();
	int a;
	for(int i=1;i<length;i++){
		for(int j=1;j<length;j++){
			if(v[j-1]<v[j]){
				a=v[j];
				v[j]=v[j-1];
				v[j-1]=a;
			}
		}
	}
	return v;
}

int SortedArray::GetMax()const{
	int length =numbers_.size();
	int maxNum =numbers_[0];
	for(int i=0;i<length;i++){
		if(numbers_[i]>maxNum){
			maxNum=numbers_[i];
		}
	}
	return maxNum;
}
int SortedArray::GetMin()const{
	int length =numbers_.size();
	int minNum =numbers_[0];
	for(int i=0;i<length;i++){
		if(numbers_[i]<minNum){
			minNum=numbers_[i];
		}
	}
	return minNum;
}
int SortedArray::length(){
	return numbers_.size();
}