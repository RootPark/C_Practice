#include <iostream>
#include <stdlib.h>
#include "reply_admin.h"
#include <string>

#include <string.h>
using namespace std;

int main() {
	string put;
	char* input=new char[100];
	ReplyAdmin replyAdmin=ReplyAdmin();
	while(1){
		getline(cin,put);
		if( put.substr(0,7)=="#remove"){
			char* tmp;
			strcpy(tmp, put.c_str());
			input =split(tmp, " ")[1];
			
			bool run;
			
			if(put.find(",")!=string::npos){
				char** strA =new char*[10];
				strA=split(input,",");
				int a=0;
				int* intA =new int[10];
				for(int i=0; i<10; i++){
					if (strA[i]==NULL){
						break;
						intA[i]=atoi(strA[i]);
						a++;
					} 
				}
				run= replyAdmin.removeChat(intA,a);
				delete[] strA;
				delete[] intA;
			}
			else if (put.find("-")!=string::npos){
				char** strA=split(input,"-");
				run=replyAdmin.removeChat(atoi(strA[0]),atoi(strA[1]));
				delete[] strA;
			}
			else{
				run=replyAdmin.removeChat(atoi(input));
				if(run==false){
					cout<<"Error!"<<endl;
				}
			}
			replyAdmin.sort();
			if(run==true){
				for(int i=0; i<replyAdmin.getChatCount(); i++){
					cout<<i<<" "<<replyAdmin.show(i)<<endl;
				}
			}
		}
		else if(put=="#quit"){
			delete[] input;
			return 0;
		}
		else{
			replyAdmin.addChat(put);
			
			for(int i=0;i<replyAdmin.getChatCount();i++){
				cout<<i<<" "<<replyAdmin.show(i)<<endl;
			}
		}
	}
}