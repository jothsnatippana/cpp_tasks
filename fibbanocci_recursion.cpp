#include<bits/stdc++.h>
using namespace std;
int dp[10005]={-1,0,1,1};
int m=3;
int fibbanocci(int n)
{
	if(dp[n]!=-1)
	{
		return dp[n];
	}
return dp[n]=fibbanocci(n-1)+fibbanocci(n-2);
}
int main()
{
	int n;
	cin>>n;
	for(int i=m+1;i<=n;i++)
	    dp[i]=-1;
	while(n>0)
	    {
	    	int n1=n;
	    	cout<<fibbanocci(n)<<endl;
	    	cin>>n;
	    	 if(n>n1)
	    	 {
	    	 	for(int i=m+1;i<=n;i++)
	    	 	{
	    	 		dp[i]=-1;
				}
			 }
		}
}
