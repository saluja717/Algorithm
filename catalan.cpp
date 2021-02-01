#include<bits/stdc++.h>
using namespace std;

int solve (int n,int k)
{
	int res=1;
	if(k>n-k)
	{
		k=n-k;
	}
	for(int i=0;i<k;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}
int Calculate(int n)
{
	int c= solve(2*n,n);
	return c/(n+1);
}
int main()
{
	int n;
	cout<<"Which term you want\n";
	cin>>n;
	int ans = Calculate(n);
	cout<<ans;
	return 0;
}
