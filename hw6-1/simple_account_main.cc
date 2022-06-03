#include <iostream>
#include "simple_account.h"
using namespace std;

void makeNew(Admin* a_admin){
	if(a_admin->num >=10){
		cout<<"Failure: Too many account"<< endl;
	}
	else{
		(a_admin->account[a_admin->num]).ID=a_admin->num;
		(a_admin->account[a_admin->num]).balance=0;
		cout<<"Account for user "<<a_admin->num<<" registered"<<endl;
		a_admin->num++;
	}
}
int main(void) {
	char work;
	int a,b,c;
	int i=0;
	Admin a_admin;
	a_admin.num=0;
	for(int j=0;j<10;j++){
		a_admin.account[i].ID=-1;
	}
	while(1){
		
		cout<<"Job?"<<endl;
		cin>>work;
		
		if(work=='D'){
			cin>> a>> b;
			a_admin.Deposit(a,b);
		}
		else if(work=='N'){
			makeNew(&a_admin);
			a_admin.Check(i);
			i++;
		}
		else if(work=='W'){
			cin>> a>> b;
			a_admin.Withdraw(a,b);
		}
		else if(work=='T'){
			cin>> a>> b>> c;
			a_admin.Transfer(a,b,c);
		}
		
		
		else if(work=='Q'){
			break;
		}
	}
}
