#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int max1=INT_MIN;
	int max2=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
	}
	if(max2==INT_MIN)
	   cout<<"all are same values";
	else
	    cout<<"second largest element of array is "<<max2;
}
