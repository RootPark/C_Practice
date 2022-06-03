#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__
#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Item{
	string name;
	char* age;
	string IdNum;
	char** subject;
	struct Item* next;
};
struct Item* create_item();
struct Item* find_end_of_list(struct Item* linked_list);
void insert_item(struct Item *linked_list, struct Item *item);
char** split(char*, const char*);
char** split(char *str,const char *delim);
#endif//__LINKED_LIST_H__
