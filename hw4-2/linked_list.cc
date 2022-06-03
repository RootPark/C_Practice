#include "linked_list.h"
#include <fstream>
#include <string.h>
using namespace std;
struct Item* create_item(){
	struct Item* currentItem =new Item();
	return currentItem;
}
struct Item* find_end_of_list(struct Item* linked_list){
	struct Item* currentItem = linked_list;
	while(currentItem->next != NULL){
		currentItem = currentItem->next;
	}
	return currentItem;
}

void insert_item(struct Item *linked_list, struct Item *item){
	find_end_of_list(linked_list)->next=item;
}