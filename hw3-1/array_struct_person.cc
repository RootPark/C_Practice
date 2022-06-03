#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person{
	char name[10];
	int age;
};
int main() {
	int i,j;

	struct Person p[3];
	
	for(i=0;i<3;i++){
		scanf("%s %d", ((p+i)->name), &((p+i)->age));
	}
	for(j=0;j<3;j++){
		printf("name: %s,", (p+j)->name);
		printf(" age: %d\n", (p+j)->age);
	}	
	return 0;
}
