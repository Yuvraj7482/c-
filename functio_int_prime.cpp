#include<iostream>
using namespace std;

int isPrime(int num,int i)
{
 if(i==1)
 {
 	return 1;
 }
 else
 {
 	if(num%i==0)
 	{
 		return 0;
	 }
	 else
	 {
	 	isPrime(num,i-1);
	 }
 }
}

main()
{
	int num,check;
	
	cout<<"enter any number"<<endl;
	cin>>num;
	
	
	check=isPrime(num,num/2);
	
	if(check==1)
	{
		cout<<"it is a primme number";
	}
	else
	{
		cout<<"is is not a prime number";
	}
}
