#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "magic_square.h"
using namespace std;
string asdf;

int** Mal_square(int size){
	int **square;
	int i;
	
	square=(int**)malloc(sizeof(int*)*size);
	for(i=0;i<size;i++){
		square[i]=(int*)malloc(sizeof(int)*size);
	}
	return square;
}

void Magic_square(int** square,int n){
	int i,j;
	int a=0,b=0;
	int cnt=1,max;
	max=n*n;
	i=0;
	j=n/2;
	for (int ii = 0; ii < n; ii++) {
		for (int jj = 0; jj < n; jj++) {
			square[ii][jj] = 0;
		}
	}
	while(cnt<=max){
		if(*(*(square+i)+j)==0){
			*(*(square+i)+j)=cnt;
		}
		else{
			i=a+1;
			j=b;
			
			square[i][j]=cnt;
					}
		a=i;
		b=j;
		i--;
		j++;
		if(i<0){
			i=n-1;
		}
		if(j>=n){
			j=0;
		}
		cnt++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<square[i][j]<<" ";
		}
		cout<<endl;
	}
	return;
}