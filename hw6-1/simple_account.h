class Account{
	public:
		int ID;
		int balance;
};
class Admin{
	public:
		Account account[10];
		int num;
		void Deposit(int ID, int InMoney);
		void Withdraw(int ID, int OutMoney);
		void Transfer(int IDFrom, int IDTo, int Money);
		void Check(int);
};