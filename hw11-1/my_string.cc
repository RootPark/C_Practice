#include <iostream>
#include <string.h>
#include "my_string.h"

using namespace std;

MyString::MyString(){
	a=nullptr;
	len =0;
}
MyString::MyString(MyString& my_string) {
	len = my_string.len;
	a = new char[len];
	strcpy(a, my_string.a);
}

MyString::~MyString() {
	if (a != nullptr)
		delete[] a;
}

MyString & MyString::operator= (const MyString& b) {
	len = b.len;
	if (a != nullptr)
		delete[] a;
	a = new char[len];
	strcpy(a, b.a);
	return *this;
}

MyString MyString::operator+(const MyString& b) {
	MyString c;
	c = *this;
	strcat(c.a, b.a);
	return c;
}

MyString MyString::operator*(const int b) {
	MyString c;
	c.len = len * b;
	c.a = new char[c.len];
	strcpy(c.a ,a);
	for (int i = 0; i < b - 1; i++)
		strcat(c.a, a);
	return c;
}

ostream& operator<< (ostream& out, MyString& my_string) {
	out << my_string.a << endl;
	return out;
}

istream& operator>> (istream& in, MyString& my_string) {
	char temp[50];
	in >> temp;
	my_string.len = strlen(temp);
	if (my_string.a != nullptr)
		delete[] my_string.a;
	my_string.a = new char[my_string.len];
	strcpy(my_string.a, temp);
	return in;
}