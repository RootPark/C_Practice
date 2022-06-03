#include <iostream>
#include "simple_account.h"

using namespace std;
void Admin::Deposit(int ID, int InMoney){
	if(account[ID].ID!=ID){
		cout<<"Account does not exist"<<endl;
	}
	else if(account[ID].balance+InMoney>1000000){
		cout<<"Failure: Deposit to user "<<ID<<" "<<InMoney<<endl;
		Check(ID);
	}
	else{
		cout<<"Success: Deposit to user "<<ID<<" "<<InMoney<<endl;
		account[ID].balance+=InMoney;
		Check(ID);
	}
}

void Admin::Withdraw(int ID, int OutMoney){
	if(account[ID].ID!=ID){
		cout<<"Account does not exist"<< endl;
	}
	else if(account[ID].balance-OutMoney<0){
		cout<<"Failure: Withdraw to user "<<ID<<" "<<OutMoney<<endl;
		Check(ID);
	}
	else{
		cout<<"Success: Withdraw to user "<<ID<<" "<<OutMoney<<endl;
		account[ID].balance-=OutMoney;
		Check(ID);
	}
}
void Admin::Transfer(int IDFrom, int IDTo, int Money){
	if(account[IDFrom].ID!=IDFrom || account[IDTo].ID!=IDTo){
		cout<<"Account does not exist"<<endl;
	}
	else if(account[IDFrom].balance-Money<0 || account[IDTo].balance+Money>1000000){
		cout<<"Failure: Transfer from user "<<IDFrom<<" to user "<<IDTo<<" "<<Money<<endl;
		if(IDFrom<IDTo){
			Check(IDFrom);
			Check(IDTo);
		}
		else{
			Check(IDTo);
			Check(IDFrom);
		}
	}
	else{
		account[IDFrom].balance-=Money;
		account[IDTo].balance+=Money;
		cout<<"Success: Transfer from user "<<IDFrom<<" to user "<<IDTo<<" "<<Money<<endl;
		if(IDFrom<IDTo){
			Check(IDFrom);
			Check(IDTo);
		}
		else{
			Check(IDTo);
			Check(IDFrom);
		}
	}
}
void Admin::Check(int ID){
	if(ID<10)
	cout<<"Balance of user "<< ID <<": "<<account[ID].balance<<endl;
}
