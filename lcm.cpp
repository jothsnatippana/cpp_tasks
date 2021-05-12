#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n;
	cout<<"enter numbers:"<<endl;
	cin>>m>>n;
	int r=2,res=1;
	while(1)
	{
		if(m%r==0 && n%r==0)
		{
			m=m/r;
			n=n/r;
			res=res*r;
		}
		else
		{
			r++;
		}
		if(n<r || m<r)
		{
			res=n*m;
			break;
		}
		
	}
	cout<<res;
}
