#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n;
	cin>>m>>n;
	while(1)
	{
		if(m<n)
		{
			swap(m,n);
		}
		m=m%n;
		if(m==0)
	    {
		     break;	
		}
	}
	cout<<n;	
}
