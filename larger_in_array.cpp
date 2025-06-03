#include<iostream>
using namespace std;
main()
{
	int size,i;
	
	cout<<"how many elements"<<endl;
	cin>>size;
	
	int a[size],l=0;
	
	cout<<"enter array"<<endl;
	
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	cout<<"==========================="<<endl;
	
	for(i=0;i<size;i++)
	{
			if(a[i]>l)
			{
				l=a[i];
			}
	}

	cout<<"larger value is "<<l;
}
