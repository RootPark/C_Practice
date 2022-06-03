#include "my_vector.h"

using namespace std;

MyVector::MyVector(){
	max_num=0;
	a=nullptr;
}
MyVector::MyVector(int _max_num){
	max_num=_max_num;
	a=new double[_max_num];
}
MyVector::~MyVector(){
	if(a!= nullptr){
		delete[] a;
	}
	a=nullptr;
}
MyVector& MyVector::operator=(const MyVector & b){
	if(a != nullptr){
		delete[]a;
	}
	a=new double[b.max_num];
	for(int i=0;i<max_num;i++){
		a[i]=b.a[i];
	}
	return *this;
}
MyVector MyVector::operator+(const MyVector &b){
	MyVector result(max_num);
	for(int i=0; i<max_num;i++){
		result.a[i]=a[i]+b.a[i];
	}
	return result;
}
MyVector MyVector::operator-(const MyVector &b){
	MyVector result(max_num);
	for(int i=0; i<max_num;i++){
		result.a[i]=a[i]-b.a[i];
	}
	return result;
}
MyVector MyVector::operator+(const int b){
	MyVector result(max_num);
	for(int i=0; i<max_num;i++){
		result.a[i]=a[i]+b;
	}
	return result;
}
MyVector MyVector::operator-(const int b){
	MyVector result(max_num);
	for(int i=0; i<max_num;i++){
		result.a[i]=a[i]-b;
	}
	return result;
}
ostream& operator<<(ostream& out, MyVector & b){
	for(int i=0;i<b.max_num;i++){
		out<<b.a[i]<<" ";
	}
	return out;
}
istream& operator>>(istream& in, MyVector & b){
	for(int i=0;i<b.max_num;i++){
		in>>b.a[i];
	}
	return in;
}