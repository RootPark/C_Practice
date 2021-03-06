#include <stdio.h>
#include <struct.h>
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int Element Type;
struct Node{
	ElementType element;
	Position next;
};

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
void Insert(ElementType X, List L, Position P);
void PrintList(List L);

int main(int argc, char *argv[]) {
	char command;
	int key1, key2;
	FILE *input;
	Position header;
	Position tmp;
	if(argc ==1){
		printf("No input file\n");
		return 0;
	}
	else{
		input= fopen(argv[1], "r");
	}
	header=MakeEmpty(header);
	while(1){
		command= fgetc(input);
		if(feof(input))break;
		switch(command){
			case 'i':
				fscanf(input, "%d %d",&key1,&key2);
				///temp = FInd(key2, header); hw3
				///Insert(key1,header,tmp); hw3
				Insert(key1,header,header);
				break;
			case 'd':
				fscanf(input, "%d",&key1);
				Delete(key1,header);
				break;
			case 'f':
				fscanf(input, "%d",&key1);
				tmp=FindPrevious(key1,header);
				if(isLast(tmp,header)){
					printf("Could not find %d in the list\n",key1);
				}
				else{
					if(tmp->element>0){
						printf("Key of the previous node of %d is %d.\n",key1,temp->element);
					}
					else{
						printf("Key of the previous node of %d is header.\n",key1);
					}
				}
				break;
			case 'p':
				PrintList(header);
				break;
			default:
				break;
		}
	}
	DeleteList(header); ///free all memory used by linked list
	fclose(input);
	return 0;
}

