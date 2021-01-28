#include<bits/stdc++.h>
using namespace std;
class edge
{
    public:
      int a,b,w;
};
bool comp(edge a1,edge a2)
{
    return (a1.w<a2.w);
}
int findparent(int b , int parent[])
{
     if(b==parent[b])
     {
         return b;
     }
     return findparent(parent[b],parent);
}
void kruskal(vector<edge>edge_list,int v)
{
      int parent[v+1];
      for(int i=1;i<=v;i++)
      {
          parent[i]=i;
      }
      int count=0;
      int j=0;
      vector<int>ans;
      while(count!=v-1)
      {
          int p1=findparent(edge_list[j].a,parent);
          int p2=findparent(edge_list[j].b,parent);
          if(p1!=p2)
          {
             ans.push_back(edge_list[j].a);
             ans.push_back(edge_list[j].b);
             parent[p1]=p2;
             count++;
          }
          j++;
      }
      for(auto i : ans)
      {
           cout<<i<<" ";
      }
}
int main()
{
    int v,e;
    cout<<"Enter the no. of Edge and vertices\n";
    cin>>v>>e;
    vector<edge>edge_list;
    int a,b,w;
    cout<<"Enter the edges\n";
    for(int i=0;i<e;i++)
    {
       cin>>a>>b>>w;
       edge_list.push_back({a,b,w});
    }
    sort(edge_list.begin(),edge_list.end(),comp);
    // for(auto i : edge_list)
    // {
    //          cout<<i.a<<" "<<i.b<<" "<<i.w<<" "<<" ";  
    //          cout<<endl;
    // }
    kruskal(edge_list,v);
    return 0;
}