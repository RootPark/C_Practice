#include <stdio.h>
void square(double* a);

int main(){
	double dvar;
	scanf("%lf", &dvar);
	square(&dvar);
	printf("%lf\n", dvar);
	return 0;
	
}
void square(double* a){
	*a= *a * *a;
}
