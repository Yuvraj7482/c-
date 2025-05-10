#include<iostream>
using namespace std;
main()
{
	char I,J,E,choice,choice1,y,n;
	

	do
	{
		cout<<"I.India"<<endl<<"J.Japan"<<endl<<"E.Exit"<<endl<<"Enter choice"<<endl;
		cin>>choice;

	
		switch(choice)
		{
			case 'I':
				cout<<"----India----"<<endl;
				break;
				
			case 'J':
				cout<<"----Japan----"<<endl;
				break;
				
			case 'E':
				cout<<"----Exit----"<<endl;
				cout<<"are you sure you want to exit"<<endl;
				cin>>choice1;
				break;
		}
		
	}while(choice1!='Y');
}
