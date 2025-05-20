#include<iostream>
using namespace std;
void add();
void sub();
void mul();
void div();
main()
{
	int choice;
	
	cout<<"1.add "<<endl<<"2.sub"<<endl<<"3.mul"<<endl<<"4.div"<<endl<<"enter choice"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			add();
			break;
			
		case 2:
			sub();
			break;
			
		case 3:
			mul();
			break;
			
		case 4:
			div();
			break;
			
		default :
			cout<<"invalid choice";
			break;	
	}
}
void add()
{
	int n1,n2,n3;
	
	cout<<"enter two number "<<endl;
	cin>>n1>>n2;
	
	n3=n1+n2;
	
	cout<<"addition is "<<n3;
}
void sub()
{
	int n1,n2,n3;
	
	cout<<"enter two number "<<endl;
	cin>>n1>>n2;
	
	n3=n1-n2;
	
	cout<<"subtraction is "<<n3;
}
void mul()
{
	int n1,n2,n3;
	
	cout<<"enter two number "<<endl;
	cin>>n1>>n2;
	
	n3=n1*n2;
	
	cout<<"multiplication is "<<n3;
}
void div()
{
	int n1,n2,n3;
	
	cout<<"enter two number "<<endl;
	cin>>n1>>n2;
	
	n3=n1/n2;
	
	cout<<"division is "<<n3;
}
