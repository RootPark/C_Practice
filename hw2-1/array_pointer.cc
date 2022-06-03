#include <stdio.h>

int main(){

double arr[]={1.1,2.2,3.3,4.4,5.5};
int i;
double* parr=arr;

for(i=0; i<5; i++)
{printf("%f\n",2* *(parr+i)); 
}
return 0;
}
