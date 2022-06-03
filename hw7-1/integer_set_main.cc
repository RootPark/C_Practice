#include <iostream>
#include <string>
#include "integer_set.h"

using namespace std;
int main() {
	string put;
	int putNum;
	IntegerSet set=IntegerSet();
	while(1){
		cin>>put;
		if(put=="add"){
			cin>>putNum;
			set.AddNumber(putNum);
			for(int i=0; i<set.GetAll().size();i++){
				cout<<set.GetAll()[i]<<" ";
			}
			cout<<endl;
		}
		else if(put=="del"){
			cin>>putNum;
			set.DeleteNumber(putNum);
			for(int i=0; i<set.GetAll().size();i++){
				cout<<set.GetAll()[i]<<" ";
			}
			cout<<endl;
		}
		else if(put=="get"){
			cin>>putNum;
			cout<<set.GetItem(putNum)<<endl;
		}
		else if(put=="quit"){
			break;
		}
	}
}