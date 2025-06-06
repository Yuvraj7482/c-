#include<iostream>
using namespace std;
main()
{
	int num,num1,rem,i,sum=0,fact;
	
	cout<<"enter any number "<<endl;
	cin>>num;
	
	num1=num;
	
	while(num>0)
	{
		rem=num%10;
		
		fact=1;
		
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		
		num=num/10;
	}
	
	if(sum==num1)
	{
		cout<<"it is a krishnamurty number";
	}
	else
	{
		cout<<"it is not a krishnamurty number";
	}
}
