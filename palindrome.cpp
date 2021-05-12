#include<bits/stdc++.h>
using namespace std;
int n,res,r,m,i;
void palindrome(int num,int ne)
{
    while(num>0)
	{
		r=num%10;
		num=num/10;
		res=res*10+r;
	}
	if(ne==res)
		cout<<res<<" is palindrome"<<endl;
	else
		cout<<res<<" is not palindrome"<<endl;	
}
int main()
{
	cin>>n;
	m=n;
	palindrome(n,m);
}
