#include<iostream>
using namespace std;

int balance=0;

void readbalance()
{
	cout<<"enter balace "<<endl;
	cin>>balance;
}

void withdraw()
{
	int amount;
	
	cout<<"enter amount for withdraw"<<endl;
	cin>>amount;
	
	balance=balance-amount;
}

void deposite()
{
	int amount;
	
	cout<<"enter amount for deposite"<<endl;
	cin>>amount;
	
	balance=balance+amount;
}

void showbalance()
{
	cout<<"balance is "<<balance;
}

int main()
{
	
	int choice;
	
	readbalance();
	
	cout<<"1.withdraw"<<endl
		<<"2.deposite"<<endl
		<<"enter choice"<<endl;
	cin>>choice;
	
	if(choice==1)
	{
		withdraw();
	}
	else if(choice==2)
	{
		deposite();
	}
	
	showbalance();
	
	return 0;
}
