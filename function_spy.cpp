#include<iostream>
using namespace std;
bool isSpy(int num)
{
int rem,sum=0,prd=1;

while(num>0)
{
rem=num%10;
sum=sum+rem;
prd=prd*rem;
num=num/10;
}
if(prd==sum)
{
return 1;
}
else
{
return 0;
}


}
int main()
{
int num,S;

cout<<" enter any number "<<endl;
cin>>num;

S = isSpy(num);

if(S==0)
{
cout<<" it is not a spy number "<<endl;
}
else
{
cout<<" it is a spy number "<<endl;
}
}
