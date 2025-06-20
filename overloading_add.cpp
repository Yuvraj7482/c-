#include<iostream>
using namespace std;
class addition
		{
			int b;
			
			public:
				void add(int x,int y)
				{
					b=x+y;
				}
				void add(float x,float y)
				{
					b=x+y;
				}
				void add(long x,long y)
				{
					b=x+y;
				}
				void a(char x,char y)
				{
					b=x+y;
				}
				void add(double x,double y)
				{
					b=x+y;
				}
				void add(string x,string y)
				{
					b=x+y;
				}
				
		};
	
	int main()
	{
		addition a;
		
		int ch,x,y;
		
		cout<<"1.int"<<endl
			<<"2.float"<<endl
			<<"3.long"<<endl
			<<"4.char"<<endl
			<<"5.double"<<endl
			<<"6.string"<<endl
			<<"enter choice"<<endl;
		cin>>ch;
		
		if(ch==1)
		{
			cout<<"enter the value of x and y"<<endl;
			cin<<x<<y<<endl;
			a.add(int x,int y)
			cout<<"addition of int is "<<a.add();
		}
		else if(ch==2)
		{
			cout<<"enter the value of x and y"<<endl;
			cin<<x<<y<<endl;
			a.add(float x,float y)
			cout<<"addition of int is "<<a.add();
		}
		else if(ch==3)
		{
			cout<<"enter the value of x and y"<<endl;
			cin<<x<<y<<endl;
			a.add(long x,long y)
			cout<<"addition of int is "<<a.add();
		}
		else if(ch==4)
		{
			cout<<"enter the value of x and y"<<endl;
			cin<<x<<y<<endl;
			a.add(char x,char y)
			cout<<"addition of int is "<<a.add();
		}
		else if(ch==5)
		{
			cout<<"enter the value of x and y"<<endl;
			cin<<x<<y<<endl;
			a.add(double x,double y)
			cout<<"addition of int is "<<a.add();
		}
		else if(ch==6)
		{
			cout<<"enter the value of x and y"<<endl;
			cin<<x<<y<<endl;
			a.add(string x,string y)
			cout<<"addition of int is "<<a.add();
		}
	}
