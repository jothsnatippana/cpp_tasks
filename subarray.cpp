#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],n,m,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
				for(int k=i;k<=j;k++)
				{
					sum=sum+a[k];
				}
				if(sum==m)
					d++;
		}
	}
	if(d)
	   cout<<"true";
	else
	   cout<<"false";
}
