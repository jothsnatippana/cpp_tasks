#include<bits/stdc++.h>
using namespace std;
int n,r,m,i,c=0,d=0;
void count(int num)
{
    while(num>0)
	{
		r=num%10;
		num=num/10;
	if(r%2==0)
	{
		c++;
	}
	if(r%2!=0)
	{
		d++;
	}
  }
  cout<<"even count is "<<c<<endl;
  cout<<"odd count is "<<d<<endl;  
		
}
int main()
{
	cin>>n;
	count(n);
}
