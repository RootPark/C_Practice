#include <iostream>
#include <string>
#include <stdlib.h>
#include "my_vector.h"
using namespace std;

int main()
{
	int maxnum;
	cin >> maxnum;
	cout << "enter a" << endl;
	MyVector a(maxnum);
	cin >> a;
	cout << "enter b" << endl;
	MyVector b(maxnum);
	cin >> b;
	while (1)
	{	
		string put;
		MyVector c(maxnum);
		cin >> put;
		if (put == "quit")
			break;
		else
		{
			if (put == "a")
			{
				cin >> put;
				if (put == "+") {
					cin >> put;
					if (atoi(put.c_str()) == 0 && put != "0") {
						if (put == "a") {
							c = a + a;
							cout << c << endl;
						}
						else if (put == "b") {
							c = a + b;
							cout << c << endl;
						}
					}
					else {
						c = a + atoi(put.c_str());
						cout << c << endl;
					}
				
				}
				else if (put == "-") {
					cin >> put;
					if (atoi(put.c_str()) == 0 && put != "0") {
						if (put == "a") {
							c = a - a;
							cout << c << endl;
						}
						else if (put == "b") {
							c = a - b;
							cout << c << endl;
						}
					}
					else {
						c = a - atoi(put.c_str());
						cout << c << endl;
					}
				}
			}
			else if (put == "b")
			{
				cin >> put; if (put == "+") {
					cin >> put;
					if (atoi(put.c_str()) == 0 && put != "0") {
						if (put == "a") {
							c = b + a;
							cout << c << endl;
						}
						else if (put == "b") {
							c = b + b;
							cout << c << endl;
						}
					}
					else {
						c = b + atoi(put.c_str());
						cout << c << endl;
					}

				}
				else if (put == "-") {
					cin >> put;
					if (atoi(put.c_str()) == 0 && put != "0") {
						if (put == "a") {
							c = b - a;
							cout << c << endl;
						}
						else if (put == "b") {
							c = b - b;
							cout << c << endl;
						}
					}
					else {
						c = b - atoi(put.c_str());
						cout << c << endl;
					}
				}
			}
		}
		
	}
}