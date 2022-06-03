#include <iostream>
#include <string>
#include <string.h>
#include "my_string.h"
using namespace std;

int main()
{
	MyString put;
	cout << "enter a" << endl;
	cin >> put;
	MyString a(put);
	cout << "enter b" << endl;
	cin >> put;
	MyString b(put);
	while (1) 
	{
		MyString c;
		string input;
		cin >> input;
		if (input == "quit")
			break;
		else if (input == "a") {
			cin >> input;
			if (input == "*") {
				int num;
				cin >> num;
				if(num > 0){
					c = a * num;
					cout << c;
				}
			}
			else if (input == "+") {
				cin >> input;
				if (input == "a") {
					c = a + a;
					cout << c;
				}
				else if (input == "b") {
					c = a + b;
					cout << c;
				}
			}
		}
		else if (input == "b") {
			cin >> input;
			if (input == "*") {
				int num;
				cin >> num;
				if(num > 0){
					c = b * num;
					cout << c;
				}
			}
			else if (input == "+") {
				cin >> input;
				if (input == "a") {
					c = b + a;
					cout << c;
				}
				else if (input == "b") {
					c = b + b;
					cout << c;
				}
			}
		}
	}
}