#include<iostream>
using namespace std;

float area1(float l,float b)
{
	int a;
	a=l*b;
	return a;
}

int main()
{
	float l,b,a;
	cout<<"enter any two value"<<endl;
	cin>>l>>b;
	
	a= area1(l,b);
	
	cout<<"area is "<<a<<endl;
	
	return 0;
}
