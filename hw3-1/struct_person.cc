#include <stdio.h>
#include <string.h>

struct Person{
	char name[10];
	int age;
};
int main() {
	
	struct Person p1;
	scanf("%s %d",p1.name, &p1.age);

	printf("name: %s\n", p1.name);
	printf("age: %d\n", p1.age);
	
	return 0;
}
