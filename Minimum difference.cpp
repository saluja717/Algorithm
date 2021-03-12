#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        int mini=0,maxi=0;
        int res=arr[n-1]-arr[0];
        for(int i=1;i<=n-1;i++)
        {
          if(arr[i]>=k)
          {
              maxi=max(arr[i-1]+k,arr[n-1]-k);
              mini=min(arr[0]+k,arr[i]-k);
               res=min(res,maxi-mini);
          }
          else
          {
              continue;
          }
      
        }
      return res;
    }
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<getMinDiff(a,n,k);
	return 0;
}
