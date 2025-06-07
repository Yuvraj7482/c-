#include<iostream>
using namespace std;
main()
{
	int age;
	char y,n,choice,m,f,choice1;
	
	cout<<"enter married status"<<endl;
	cin>>choice;
	
	if(choice=='n')
	{
		cout<<"enter gender"<<endl;
		cin>>choice1;
		cout<<"enter age"<<endl;
		cin>>age;
		if(choice1=='m' && age>=21)
		{
			cout<<"insurance approved";
		}		
		else if(choice1=='f' && age>=21)
		{
			cout<<"insurance approved";
		}
	}
	else
	{
	}
}
