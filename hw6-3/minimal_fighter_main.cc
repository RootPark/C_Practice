#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "minimal_fighter.h"

using namespace std;

string *split(string& str, const string& delim){
	string* string_list =new string[10];
	for(int i=0; i<10;i++){
		string_list[i]="";
	}
	size_t prev=0, pos=0;
	int idx=0;
	while(pos!=string::npos){
		pos =str.find_first_of(delim, prev+1);
		string_list[idx]=str.substr(prev,pos-prev);
		prev=pos+1;
		++idx;
		}
		return string_list;
}

int spaceNum(string str){
	int num=0;
	int i;
	for(i=0;i<strlen(str.c_str()); i++){
		if(str[i]==' '){
			num++;
		}
	}
	return num;
}

int numWhat(int inputNum){
	int result =0;
	if(inputNum==0){
		return 1;
	}
	while(inputNum>0){
		inputNum/=10;
		result++;
	}
	return result;
}

int main() {
	int keep =0;
	string input;
	
	while(1){
		getline(cin, input);
		if(spaceNum(input)>4){
			break;
		}
		string* strarray =split(input," ");
		int* intarray = new int[10];
		for(int i=0; i<10 ; i++){
			intarray[i]=atoi(strarray[i].c_str());
		}
		for(int i=0; i<5 ; i++){
			if(i==2){
				continue;
			}
			if((strarray[i]!="0"&&intarray[i]==0)||(intarray[i]<0)){
				keep=1;
				break;
			}
		}
		if(keep ==1){
			break;
		}
		MinimalFighter fighter1= MinimalFighter();
		MinimalFighter fighter2= MinimalFighter();
		fighter1 =MinimalFighter(intarray[0],intarray[1]);
		fighter2 =MinimalFighter(intarray[3],intarray[4]);
		
		if(input=="Q"){
			break;
		}
		if(strarray[2]=="H"){
			fighter1.hit(&fighter2);
		}
		else if(strarray[2]=="A"){
			fighter1.attack(&fighter2);
		}
		else if(strarray[2]=="F"){
			fighter1.fight(&fighter2);
		}
		else break;
		if(fighter1.status()==Alive){
			cout<<"H"<< fighter1.hp()<< " ,P"<<fighter1.power()<<" / ";
		}
		if(fighter1.status()==Dead){
			cout<<"DEAD / ";
		}
		if(fighter2.status()==Alive){
			cout<<"H"<< fighter2.hp()<< " ,P"<<fighter2.power()<<" / "<<endl;
		}
		if(fighter2.status()==Dead){
			cout<<"DEAD / "<<endl;
		}
	}
	return 0;
}

