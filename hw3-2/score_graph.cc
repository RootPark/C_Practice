#include <stdio.h>
#include <string.h>

typedef struct 
{
	char name[7];
	int score;
}Person;

void printScoreStars(Person* persons, int len){
	
	int i;
	for(len=0;len<3;len++){
		int str=((persons+len)->score)/5;
		printf("%s ",((persons+len)->name));
		for(i=0;i<str;i++){
			printf("*");
		}
		printf("\n");
	}
}

int main(void) {
	int j;
	Person p[3];
	for(j=0;j<3;j++){
		scanf("%s %d",((p+j)->name), &((p+j)->score));
	}
	printScoreStars(p,3);
}
