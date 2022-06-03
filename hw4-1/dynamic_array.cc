#include <iostream>
#include <string>
#include <stdlib.h>


int main() {
	int size;
	std::cin>>size;
	int *numPtr = (int*)malloc(sizeof(int)*size);
	for(int i=0; i<size; i++){
		numPtr[i]=i;
	}
	for(int i=0; i<size;i++){
		std::cout<<numPtr[i]<<" ";
	}
	free(numPtr);
	return 0;
}