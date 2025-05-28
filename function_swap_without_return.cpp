#include<iostream>
using namespace std;

void swap(int *a,int *b,int *c,int *d)
{
	int e;
	e=*d;
	*d=*c;
	*c=*b;
	*b=*a;
	*a=e;
}
main()
{
	int u,v,w,x;
	
	cout<<"enter u"<<endl;
	cin>>u;
	
	cout<<"enter v"<<endl;
	cin>>v;
	
	cout<<"enter w"<<endl;
	cin>>w;
	
	cout<<"enter x"<<endl;
	cin>>x;
	
	swap(&u,&v,&w,&x);
	
	cout<<"value of u "<<u<<endl;
	cout<<"value of v "<<v<<endl;
	cout<<"value of w "<<w<<endl;
	cout<<"value of x "<<x<<endl;
}
