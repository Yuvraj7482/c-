#include<iostream>
using namespace std;

class Example
{

	public:
		int isSpy(int num)
		{
			int fact=1,sum=0,rem,s;
			
			rem=num%10;
			fact=fact*rem;
			sum=sum+rem;
			
			if(sum==fact)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		void pallindrome(int num)
		{
			int rem,rev=0,num1;
			
			num1=num;
			
			rem=num%10;
			rev=rev+rem;
			num=num/10;
			if(num1==rev)
			{
				cout<<"it is pallindrome"<<endl;
			}
			else 
			{
				cout<<"it is not a pallindrome"<<endl;
			}
		}
};

main()
{
	int s,num;
	
	cout<<"enter any number"<<endl;
	cin>>num;
	
	Example e;
	s=e.isSpy(num);
	if(s==1)
	{
		cout<<"it is spy number"<<endl;
	}
	else if(s==0)
	{
		cout<<"it is not a spy number";
	}
	e.pallindrome(num);
}
