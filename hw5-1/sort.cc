#include <iostream>
#include "sort.h"
using namespace std;
void sorting(int a, int* b){
	int temp;
	b=(int*)malloc(sizeof(int)*a);
	for(int i=0; i<a;i++){
			cin>>b[i];
		}
		for(int i=0;i<a-1;i++){
			for(int j=i+1;j<a;j++){
				if(b[i]>b[j]){
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		for(int i=0;i<a;i++){
			cout<<b[i]<<" ";
		}
		
	}



