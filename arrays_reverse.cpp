#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[10],int s,int n)
{ 
    int m=n;
	for(int i=0;i<s;i++)
	{
	  m=m-1;
	  swap(arr[i],arr[m]);
    }
    for(int j=0;j<n;j++)cout<<arr[j];
    
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int s=(int)n/2;
	reverse(a,s,n);
}
