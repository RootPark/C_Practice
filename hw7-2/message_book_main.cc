#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdlib.h>
#include "message_book.h"

using namespace std;

int main() {
	MessageBook B= MessageBook();
	while(1){
		string input, command, strNumber, sentence;
		int number;
		
		cin>>command;
		
		if(command=="add"){
			cin>>strNumber;
			cin.get();
			number =atoi(strNumber.c_str());
			if(strNumber != "0"&&number ==0){
				break;
			}
			getline(cin,sentence);
			B.AddMessage(number, sentence);
		}
		else if(command=="delete"){
			cin >> strNumber;
			number = atoi(strNumber.c_str());
			if(strNumber != "0" && number == 0) break;
			B.DeleteMessage(number);
		}
		else if(command == "print"){
			cin >> strNumber;
			number = atoi(strNumber.c_str());
			if(strNumber != "0" && number == 0) break;
			cout << B.GetMessage(number) << endl;
		}
		else if(command == "list"){
		for(int i = 0; i < B.GetNumbers().size(); i++){
				cout << B.GetNumbers()[i] << ": " << B.GetMessage(B.GetNumbers()[i]) << endl;
			}
		}
		else if(command == "quit") break;
		else break;				
	}
	return 0;
}