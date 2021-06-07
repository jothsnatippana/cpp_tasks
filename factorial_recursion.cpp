#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int fact(int n)
{
	if(n==0||n==1)
	  return dp[n]=1;
	if(dp[n]!=-1)
	{
	   return dp[n];
    }
return dp[n]=n*fact(n-1); 
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	    dp[i]=-1;
	    while(n>=0)
	    {
	    	int m=n;
	    	cout<<fact(n)<<endl;
	    	cin>>n;
	    	 if(n>m)
	    	 {
	    	 	for(int i=m+1;i<=n;i++)
	    	 	{
	    	 		dp[i]=-1;
				 }
			 }
		}
}
