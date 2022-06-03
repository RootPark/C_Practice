#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

using namespace std;
char ** split(char *str, const char *delim){
	char **string_list = (char **)malloc(10 * sizeof(char*));
	for(int i=0;i<10;i++){
		string_list[i] = NULL;
	}
	
	int idx=0;
	char * token = strtok(str,delim);
	while(token != NULL){
		string_list[idx] = (char*)malloc(strlen(token)+1);
		strcpy(string_list[idx],token);
		token = strtok(NULL,delim);
		
		++idx;
	}
	return string_list;
}

int main(void){
	
	FILE* input = fopen("input.txt", "r");
	char arr[100];
	char** splLine;
	char** splSub;
	struct Item* first = new Item();
	int n=0;
	
	while(fgets(arr, sizeof(arr),input)!=NULL){
		splLine =split(arr,":");
		splSub=split(splLine[3],",");
		if(n==0){
			n++;
			first = create_item();
			first->name =(string)splLine[0];
			first->age =splLine[1];
			first->IdNum =(string)splLine[2];
			first->subject =splSub;
			first->next =NULL;
			
			continue;
		}
		struct Item* item = create_item();
		
		item->name =(string)splLine[0];
		item->age =splLine[1];
		item->IdNum = (string)splLine[2];
		
		item->subject = splSub;
		item->next = NULL;
		
		insert_item(first, item);
	}
	
	fclose(input);
	
	struct Item* currentItem = first;
	struct Item* deleteItem = first;
	
	while(1){
		char hakbun[4];
		hakbun[0]=currentItem ->IdNum[0];
		hakbun[1]=currentItem ->IdNum[1];
		hakbun[2]=currentItem ->IdNum[2];
		hakbun[3]=currentItem ->IdNum[3];
		if(hakbun[0]=='2'&& hakbun[1]=='0'&&hakbun[2]=='1'&&hakbun[3]=='3'){
			cout << currentItem->name << ": "<<currentItem->IdNum<<": ";
			int i=0;
			while(currentItem->subject[i]!=NULL){
				cout<<currentItem->subject[i];
				if(currentItem->subject[i+1]!=NULL){
					cout<<", ";
				}
				i++;
			}
		}
		
		if(currentItem->next ==NULL){
			break;
		}
		currentItem=currentItem->next;
	}
	currentItem=first;
	while(1){
		if(currentItem->next==NULL){
			delete(deleteItem);
			break;
		}
		currentItem=currentItem->next;
		delete(deleteItem);
		deleteItem=currentItem;
	}
	return 0;
}
