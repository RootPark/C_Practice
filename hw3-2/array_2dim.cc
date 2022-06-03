#include <stdio.h>

int main(void) {
	int arr[3][2];
	int i, j;
	int sum1, sum2;
		
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
			}
			sum1=arr[0][0]+arr[1][0]+arr[2][0];
			sum2=arr[0][1]+arr[1][1]+arr[2][1];
			printf("sum of the 1st column: %d\n",sum1);
			printf("sum of the 2nd column: %d",sum2);

	return 0;
}