#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
#define NUM_OF_CHAT 10
#include "reply_admin.h"

using namespace std;

char **split(char *str, const char *delim){
	char **string_list =(char **)malloc(10*sizeof(char*));
	for (int i=0;i<10;++i){
		string_list[i]=NULL;
	}
	int idx=0;
	char *token =strtok(str, delim);
	while(token!=NULL){
		string_list[idx]=(char *)malloc(strlen(token)+1);
		strcpy(string_list[idx],token);
		token=strtok(NULL,delim);
		
		++idx;
	}
	
	return string_list;
}

ReplyAdmin::ReplyAdmin(){
	chats=new string[NUM_OF_CHAT];
}

ReplyAdmin::~ReplyAdmin(){
	delete[] chats;
}

int ReplyAdmin::getChatCount(){
	int num=0;
	for(int i=0; i<NUM_OF_CHAT;i++){
		if(chats[i]!="\0"){
			num++;
		}
	}
	return num;
}

bool ReplyAdmin::addChat(string _chat){
	if(getChatCount()>=NUM_OF_CHAT){
		return false;
	}
	else{
		chats[getChatCount()]=_chat;
		return true;
	}
}

bool ReplyAdmin::removeChat(int _index){
	if(_index>=10){
		return false;
	}
	if(chats[_index]=="\0"){
		return false;
	}
	else{
		chats[_index]="\0";
		return true;
	}
}
bool ReplyAdmin::removeChat(int* _indices, int _count){
	int n=0;
	for(int i=0;i<_count;i++){
		if(removeChat(_indices[i])){
			n=1;
		}
	}
	if(n==0){
		cout<<"'Error!"<<endl;
		return false;
	}
	else{
		return true;
	}
}
bool ReplyAdmin::removeChat(int _start, int _end){
	int n=0;
	for(int i=_start; i<_end+1;i++){
		if(i>=10){
			break;
		}
		if(chats[i]!="\0"){
			chats[i]="\0";
			n=1;
		}
	}
	if(n==1){
		return true;
	}
	else{
		cout<<"Error!"<<endl;
		return false;
	}
}
void ReplyAdmin::sort(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9;j++){
			string temp;
			temp= chats[j];
			if(chats[j]=="\0"){
				chats[j]=chats[j+1];
				chats[j+1]=temp;
			}
		}
	}
}

string ReplyAdmin::show(int i){
	return chats[i];
};