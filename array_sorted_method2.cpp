#include<bits/stdc++.h>
using namespace std;
bool sorted_or_not(int arr[10],int n)
{
	for(int i=0;i<n-1;i++)
	{
	   	if(arr[i]>arr[i+1])
	   	       return false;
    }
	return true;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int s=sorted_or_not(a,n);
	if(s)
	 cout<<"sorted array";
	else
	 cout<<"not a sorted array";
}
