#include<bits/stdc++.h>
using namespace std;
int disc(int arr2[100],int n)
{    
    int p=1;
	int max=arr2[p];
	int max_pos=p;
	while(max<0)
	{
		p=p+1;
		max=arr2[p];
		max_pos=p;
	}
	for(int i=1;i<=n;i++)
	{
		if(max<arr2[i])
		{
			max=arr2[i];
			max_pos=i;
		}
	}
	return max_pos;
}
int main()
{
	int s,n;
	cout<<"enter number of customers arrived to (elements in the array):"; 
	cin>>s;
	cout<<" total number of ids :";
	cin>>n;
	int arr[n],j=1,arr1[s];
	for(int i=1;i<=n;i++)//taking temporary array and initializing all elements with zero
	{
		arr[i]=0;
	}
	for(int k=1;k<=s;k++)
	{
		cin>>arr1[k];
	}
	for(int a=1;a<=s;a++)
	{
		for(int b=a+1;b<=s;b++)
		{
		 
		if(arr1[a]==arr1[b] && arr1[a]>0)
		{
		  arr[arr1[a]]++;
		  arr1[b]=0;	
		}
	    }
    }
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>0)
		  cout<<"customer"<<i<<"visited:"<<arr[i]+1<<endl;
	    else
	       arr[i]==-1;
	}  
	int res = disc(arr,n);
	cout<<"The customer having an id: "<<res<<" will receive th discount";
}


