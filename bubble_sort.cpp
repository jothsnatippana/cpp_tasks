#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int swapped=0;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swapped=1;
				swap(a[j],a[j+1]);
			}
		}
	if(swapped==0)//used to know whether we actually need to sort the given array
	{
	 cout<<"no need to sort"<<endl;
	 break;
    }
      }
	 for(int i=0;i<n;i++)cout<<a[i]<<"\t";
}
