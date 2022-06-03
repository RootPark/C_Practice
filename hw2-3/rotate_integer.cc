#include <stdio.h>
#include <stdlib.h>

void rotateLeft(int* pa, int* pb, int* pc);
void rotateRight(int* pa, int* pb, int* pc);
int i;
void rotateLeft(int* pa, int* pb, int* pc){
	int rotateL;
	rotateL=*pa;
	*pa=*pb;
	*pb=*pc;
	*pc=rotateL;
	printf("%d:%d:%d\n",*pa,*pb,*pc);
}
void rotateRight(int* pa, int* pb, int* pc){
	int rotateR;
	rotateR=*pc;
	*pc=*pb;
	*pb=*pa;
	*pa=rotateR;
	printf("%d:%d:%d\n",*pa,*pb,*pc);

}


int main(void) {
	int a=10, b=20, c=30;
	printf("%d:%d:%d\n", a,b,c);
	while(1){
		scanf("%d",&i);
		if (i==1){
			rotateLeft(&a,&b,&c);
			
		}
		else if(i==2){
			rotateRight(&a,&b,&c);
			
		}
		else{
			break;
		}
	}
	}
