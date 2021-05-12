#include<bits/stdc++.h>
using namespace std;
int n,r,m,c=0,d=0,res,a;
int check(int num);
void count(int num)
{
	a=check(num);//to give the sum of squares of digits
	while(1)
	{
	m=log10(a)+1;//to count number of digits
	if(m>=2 && a>0)
	{
       num=a;
       a=check(num);
       continue;
	}
	else if(m==1 && a==1)
	{
		cout<<"happy number"<<endl;
		break;
	}
	else
	{
		cout<<"not happy number"<<endl;
		break;
	} 
   } 	
}
int check(int num)
{
    res=0;
	while(num>0)
	{
		r=num%10;
		num=num/10;
		res=res+pow(r,2);
    }
    return res;
}
int main()
{
	cin>>n;
	count(n);
}
