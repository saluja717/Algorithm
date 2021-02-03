#include<bits/stdc++.h>
using namespace std;
void find(string s,int l,int r)
{
	if(l==r)
	{
		cout<<s<<endl;
		return;
	}
	for(int i=l;i<=r;i++)
	{
		swap(s[i],s[l]);
		find(s,l+1,r);
		swap(s[i],s[l]);
	}
	return;
}
int main()
{
	string s;
	cin>>s;
	find(s,0,s.length()-1);
	return 0;
}
