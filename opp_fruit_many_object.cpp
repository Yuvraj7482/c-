#include<iostream>
using namespace std;

class fruits
{
	private:
		string name,color;
		char vitamin;
		float price;
		
	public:
		void read()
		{
			cout<<"enter name of fruit "<<endl;
			cin>>name;
			
			cout<<"enter the color "<<endl;
			cin>>color;
			
			cout<<"enter it vitamin "<<endl;
			cin>>vitamin;
			
			cout<<"enter price "<<endl;
			cin>>price;
		}
		
	void show()
		{
			cout<<"==============================="<<endl;
			cout<<"name is		"<<name<<endl;
			cout<<"color is	"<<color<<endl;
			cout<<"vitamin is	"<<vitamin<<endl;
			cout<<"price is	"<<price<<endl;
			cout<<"==============================="<<endl;
	 	}	
};

main()
{
	fruits f1,f2;				//you can decalre many object as you like 
	f1.read();
	f1.show();
	
	f2.read();
	f2.show();
	
}

