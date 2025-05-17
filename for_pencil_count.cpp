#include<iostream>
using namespace std;
main()
{
	int std,pc=0,i;
	
	cout<<"enter standard	";
	cin>>std;

	if(std>=1 && std<=12)
	{
			for(i=1;i<=std;i++)
		{
		pc=i*i+pc;
		}
		cout<<"pencil count is	"<<pc;
	}
	else
	{
		cout<<"invalid input";
	}
		

}
