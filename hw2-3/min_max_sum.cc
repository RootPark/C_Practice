#include <stdio.h>

int main(void) {
	
	int size;
	int arr[5];
	int max, min, sum=0;
	int i,j;

	
	for (j=0; j<5; j++){
		scanf("%d",&arr[j]);
	}
	
	min=arr[0];
	max=arr[0];
	
	for (i=0; i<5; i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	printf("max: %d\n", max);
	printf("min: %d\n", min);
	printf("sum: %d\n", sum);
	return 0;
	
}
