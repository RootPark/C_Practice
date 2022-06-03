#include <stdio.h>
void getSumDiff(int a, int b, int* pSum, int* pDiff);

int main(void) {
	int a,b;
	int pSum,pDiff;
	scanf("%d\n%d", &a,&b);
	getSumDiff(a,b,&pSum,&pDiff);
	printf("%d\n%d\n", pSum,pDiff);
}

void getSumDiff(int a, int b, int* pSum, int* pDiff){
	*pSum=a+b;
	*pDiff=a-b;
}

                                                                                                                                             
