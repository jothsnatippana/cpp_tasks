#include<bits/stdc++.h>
using namespace std;
bool sorted_or_not(int arr[10],int n)
{
	for(int i=0;i<n-1;i++)
	{
	  for(int j=i+1;j<n;j++)
	   {
	   	if(arr[i]>arr[j])
	   	{
	   	     return false;
	    }
	  }
    }
	return true;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	bool s=sorted_or_not(a,n);
	if(s)
	 cout<<"sorted array";
	else 
	 cout<<"not a sorted array";
}
