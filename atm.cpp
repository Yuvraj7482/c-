#include<iostream>
using namespace std;
main()
{
	int num,a,b,c,d;
	
	cout<<"enter amount		";
	cin>>num;
	
	a=num/2000;
	b=(num%2000)/500;
	c=(num%500)/100;
	d=(num%100)/10;
	
	cout<<"2000 note is		"<<a<<endl;
	cout<<"500 note is		"<<b<<endl;
	cout<<"100 note is		"<<c<<endl;
	cout<<"10 note is		"<<d<<endl;
}
