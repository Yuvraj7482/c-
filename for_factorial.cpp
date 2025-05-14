#include<iostream>
using namespace std;
main()
{
	int num,i,fact=1;
	
	cout<<"enter number		";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial is	"<<fact;
}
