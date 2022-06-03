#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char *argv[]) {
	int i;
	string ssum="";
	int sum=0;
	for(i=1;i<=argc-1;i++){
		if(atoi(argv[i])==0){
			ssum +=argv[i];
			}
		else{
			sum +=atoi(argv[i]);
		}
		
	}
	cout<<ssum<<endl;
	cout<<sum<<endl;
}