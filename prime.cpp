#include<bits/stdc++.h>
using namespace std;
int c=0;
// first method:
void prime(int num)
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			c++;
			cout<<"not prime"<<endl;
			break;
		}
    }
    if(c==0)
       cout<<"prime"<<endl;
}
//second method:
void prime1(int num)
{
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			c++;
			cout<<"not prime"<<endl;
			break;
		}
    }
    if(c==0)
       cout<<"prime"<<endl;
}
//best method:
void prime2(int num)
{
	for(int i=2;i<(int)sqrt(num);i++)
	{
		if(num%i==0)
		{
			c++;
			cout<<"not prime"<<endl;
			break;
		}
    }
    if(c==0)
       cout<<"prime"<<endl;
}
int main()
{
	int n;
	cin>>n;
	prime(n);
	prime1(n);
	prime2(n);
}
