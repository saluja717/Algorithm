#include<bits/stdc++.h>
using namespace std;
int miniStep(int a[],int k,int n)
{
	if(k==0)
	{
		return 0;
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(k-a[i]>=0)
		{
	     int sub= miniStep(a,k-a[i],n);
	     ans=min(ans,sub+1);
		}
	}
	return ans;
}
int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	cout<<miniStep(a,k,n);
	return 0;
}
