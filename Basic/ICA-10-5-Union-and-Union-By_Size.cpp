#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
using namespace std;
const int N=1e5+5;
int par[N],sz[N],level[N];
void dsu_ini(int n)
{
   for(int i=0;i<n;i++)
   {
    par[i]=-1;
    sz[i]=1;//size
    level[i]=0;
   }
   par[1]=2,par[2]=3,par[5]=6,par[6]=7;
}
int dsu_find(int node)
{
    if(par[node]==-1)
    {
        return node;
    }
    int leader=dsu_find(par[node]);
    return leader;
}
void dsu_union(int node1,int node2)
{
    int leader1=dsu_find(node1),leader2=dsu_find(node2);
    par[leader1]=leader2;
}
void dsu_union_by_size(int node1,int node2)
{
    int leader1=dsu_find(node1),leader2=dsu_find(node2);
    par[leader1]=leader2;
    if(sz[leader1]>sz[leader2])
    {
        sz[leader2]=leader1;
        sz[leader1]+=sz[leader2];
    }
    else
    {
        sz[leader1]=leader2;
        sz[leader2]+=sz[leader1];
    }
}
void dsu_union_by_rank(int node1,int node2)
{
    int leader1=dsu_find(node1),leader2=dsu_find(node2);
    if(level[leader1]>level[leader2])
    {
        par[leader2]=leader1;
    }
    else if(level[leader2]>level[leader1])
    {
        par[leader1]=leader2;
    }
    else
    {
        par[leader1]=leader2;
        level[leader1]++;
    }
}
int main()
{
    freopen("ICA-10.txt","r",stdin);
    int n;
    cin>>n;
    dsu_ini(n);
    for(int i=0;i<n;i++)
    {
        cout<<par[i]<<blk;
    }
    cout<<nl;
    cout<<dsu_find(2);
    dsu_union(3,5);
    cout<<nl;
    for(int i=0;i<n;i++)
    {
        cout<<par[i]<<blk;
    }

}