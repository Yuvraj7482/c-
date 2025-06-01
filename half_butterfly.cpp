#include<iostream>
using namespace std;
main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(i+j>=11 || j<=i)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;	
	}
}
