
#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{
	int c=0;
	for(int j=2;j<=(int)sqrt(n);j++)
	{
		if(n%j==0)
		{   
		    c++;
		      return 0;
		}
	}
         if(c==0)
            return 1;
}
void primeupto(int number)
{
int i=2;
		while(i<number)
		{
		  int a=prime(i);
		  if(a)
		  cout<<i<<" ";
		  i++;
	    }
}
int main()
{
	int num;
	cin>>num;
	primeupto(num);
}

