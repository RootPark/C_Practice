#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <string>
#include "sorted_array.h"

using namespace std;
int main() {
	string put;
	SortedArray sort=SortedArray();

	while(1){
		cin>>put;
		if(put=="ascend"){
			for(int i=0;i<sort.length();i++){
				cout<<sort.GetSortedAscending()[i]<<" ";
			}
		}
		else if(put=="descend"){
			for(int i=0; i<sort.length();i++){
				cout<<sort.GetSortedDescending()[i]<<" ";
			}
		}
		else if(put=="max"){
			cout<<sort.GetMax()<<endl;
		}
		else if(put=="min"){
			cout<<sort.GetMin()<<endl;
		}
		else if(put=="quit"){
			break;
		}
		else{
			sort.AddNumber(atoi(put.c_str()));
		}
	}
	return 0;
}