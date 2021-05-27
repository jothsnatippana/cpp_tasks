#include<bits/stdc++.h>
using namespace std;
void display(int arr[10],int n);
void del(int arr[10],int n,int x)
{
	int pos=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			 pos=i;
			arr[i]=arr[i+1];
		}
		else
			if(pos!=0)
			   arr[i]=arr[i+1];	
			else
			     continue;
	}
	display(arr,n);
}
void display(int arr[10],int n)
{
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	int cap;
	cin>>cap;
	int arr[cap];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
      cin>>arr[i];
	}
	int x;
	cin>>x;
	del(arr,n,x);
}
