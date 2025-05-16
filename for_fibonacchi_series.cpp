#include<iostream>
using namespace std;
main()
{
	int i,num,f,s,t;
	
	cout<<"enter number		";
	cin>>num;
	
	f=0,s=1;
	cout<<f<<" "<<s<<" ";
	
	for(i=1;i<=num-2;i++)
	{
		t=f+s;
		
		cout<<t<<" ";
		f=s;
		s=i;
		
	}
}
