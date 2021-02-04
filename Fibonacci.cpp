#include<bits/stdc++.h>
using namespace std;
int fibo(int n,int dp[])
{
	if(n==0 || n==1)
	{
		return n;

	}
	int ans1,ans2;
	if(dp[n-1]==-1)
	{
		ans1=fibo(n-1,dp);
		dp[n-1]=ans1;
	}
	else
	{
		ans1=dp[n-1];
	}
	if(dp[n-2]==-1)
		{
			ans2=fibo(n-2,dp);
			dp[n-2]=ans2;
		}
		else
		{
			ans2=dp[n-2];
		}
	return ans1+ans2;
}
int main()
{
	int n;
	cin>>n;
	int dp[n];
	for(int i=0;i<n;i++)
	{
		dp[i]=-1;
	}
	cout<<fibo(n,dp);
	return 0;
}
