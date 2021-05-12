#include<bits/stdc++.h>
using namespace std;
int n,r,m,i,c=0,d=0;
void count(int num,int ne)
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
      if(c==ne)
	  {
	  	cout<<"stroongly even"<<endl;
	   }
	   else if(d==ne)
	   {
	   	cout<<"strongly odd"<<endl;
		} 
		else
		{
			cout<<"number";
		}
		
}
int main()
{
	cin>>n;
	m=log10(n)+1;
	count(n,m);
}
