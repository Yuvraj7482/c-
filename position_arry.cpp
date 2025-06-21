#include<iostream>
using namespace std;
main()
{
	int size,i,num;
	
	cout<<"enter array size	"<<endl;
	cin>>size;
	
	int a[size];

	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	cout<<"enter any number to search "<<endl;
	cin>>num;
	
	for(i=0;i<size;i++)
	{
		if(num==a[i])
		{
			cout<<"position at "<<i;
		}
	}
	if(a[size]>)
		{
			cout<<"position at -1";
		}
}
