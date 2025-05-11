#include<iostream>
using namespace std;
main()
{
	int unit,bill;
	
	cout<<"enter unit consumed		";
	cin>>unit;
	
	if(unit<=100)
	{
		bill=unit*3;
		cout<<"bill is rs "<<bill;
	}
	else if(unit>100 && unit<=300)
	{
		bill=300+(unit-100)*5;
		cout<<"bill is rs "<<bill;
	}
	else if(unit>300 && unit<=500)
	{
		bill=1300+(unit-300)*7;
		cout<<"bill is rs "<<bill;
	}
	else if(unit>500)
	{
		bill=2700+(unit-500)*9;
		cout<<"bill is rs "<<bill;
	}
}
