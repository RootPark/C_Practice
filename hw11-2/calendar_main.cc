#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "calendar.h"
using namespace std;
int main() {
	string input1, input2;
	Date c;
	while(1){
		cin>>input1;
		if(input1=="set"){
			cin>>c;
		}
		else if(input1=="next"){
			cin>>input2;
			if(input2=="day"){
				c.NextDay();
			}
			else{
				c.NextDay(atoi(input2.c_str()));
			}
		}
		else if(input1=="quit"){
			break;
		}
		cout<<c;
	}
	return 0;
}