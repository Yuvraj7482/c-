#include<iostream>
using namespace std;

void isPrime(int num)
{
int i,count=0;

for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
{
cout<<" it is a prime number "<<endl;
}
else
{
cout<<" it is not a prime number "<<endl;
}
}
 int main()
{
int num,P;

cout<<" enter any number "<<endl;
cin>>num;

 isPrime(num);

}
