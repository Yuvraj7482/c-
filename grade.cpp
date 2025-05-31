#include<iostream>
using namespace std;
main()
{
	int p,c,m;
	float per,total;
	
	cout<<"enter physic marks		";
	cin>>p;
	
	cout<<"enter chemistry marks		";
	cin>>c;
	
	cout<<"enter maths marks		";
	cin>>m;
	
	total=p+c+m;
	cout<<"total is "<<total<<endl;
	per=total/3;
	cout<<"percentage is "<<per<<endl;
	
	if(per>80)
	{
		cout<<"grade A";
	}
	else if(per>60 && per<80)
	{
		cout<<"grade B";
	}
	else if(per>40 && per<60)
	{
		cout<<"grade C";
	}
	else 
	{
		cout<<"fail";
	}
}
