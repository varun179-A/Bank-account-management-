#include<iostream>
using namespace std;
class bankaccount
{
	int balance=1000;
	public:
		void deposit(int amount)
		{
			balance=+amount;
			cout<<"amount deposited successfully!\n";
		}
		void withdraw(int amount)
		{
			if(amount<=balance)
			{
				balance-=amount;
				cout<<"withdrawl successful!\n";
			 } 
			 else
			 {
			 	cout<<"insufficient balance!\n";
			 }
		}
		void display()
		{
			cout<<"current balance:"<<balance;
		}
};
int main()
{
	bankaccount account;
	int choice,amount;
	cout<<"1.deposit\n 2.withdrawl\n 3.check balance\n";
	cout<<"enter choice:";
	cin>>choice;
	if(choice==1)
	{
		cout<<"enter amount:";
		cin>>amount;
		account.deposit(amount);
	}
	else if(choice==2)
	{
		cout<<"enter amount:";
		cin>>amount;
		account.withdraw(amount);
	}
	else if(choice==3)
	{
		account.display();
	}
	else
	{
		cout<<"invalid choice";
	}
	return 0;
}
