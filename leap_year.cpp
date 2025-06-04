#include<iostream>
using namespace std;
main()
{
	int year;
	
	cout<<"enter year		";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"it is a leap year";
	}
	else
	{
		cout<<"it is not a leap year";
	}
}
