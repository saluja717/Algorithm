#include <bits/stdc++.h>

using namespace std;

struct Item
{
    int weight;
    int value;
};
bool comp(struct Item a,struct Item b)
{
    double r1= (double)a.value/a.weight;
    double r2= (double)b.value/b.weight;
    return r1>r2;
}
double KnapSack(Item a[],int n,int w)
{
    double maxiP=0.0;
    sort(a,a+n,comp);
    for(int i=0;i<n;i++)
    {
        if(a[i].weight<=w)
        {
            w-=a[i].weight;
            maxiP+=a[i].value;
        }
        else
        {
            maxiP+=a[i].value*((double)w/a[i].weight);
            break;
        }
    }
    return maxiP;
}
int main()
{

    int n,w;
    cin>>n>>w;
    Item a[n];
    int p,we;
    for(int i=0;i<n;i++)
    {
        cin>>p>>we;
        a[i].value=p;
        a[i].weight=we;
    }
    double maxiP= KnapSack(a,n,w);
    cout<<maxiP;
    return 0;
}
