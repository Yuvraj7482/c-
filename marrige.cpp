#include<iostream>
using namespace std;
main()
{
	int age;
	char m,f,gender;
	
	cout<<"enter gender ";
	cin>>gender;
	
	cout<<"enter age ";
	cin>>age;
	
	if(gender=='m' && age>=21)
	{
		cout<<"you are eligible for marriage";
	}
	else if(gender=='f' && age>=21)
	{
		cout<<"you are eligible for marrige";
	}
	else
	{
		cout<<"you are not eligible for marriage";
	}
}
