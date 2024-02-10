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
const int N=1e5+5;
using namespace std;
int par[N];
int level[N],group_size[N];
void dsu_ini(int n)
{
 for(int i=0;i<n;i++)
 {
    par[i]=-1;
    level[i]=0;
    group_size[i]=1;
 }
}
int dsu_find(int node)
{
    if(par[node]==-1)
    {
        return node;
    }
    int leader=dsu_find(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2)
{
    int leader1=dsu_find(node1),leader2=dsu_find(node2);
    if(level[leader2]>level[leader1])
    {
        par[leader1]=leader2;
    }
    else if(level[leader1]>level[leader2])
    {
        par[leader2]=leader1;
    }
    else
    {
        par[leader2]=leader1;
        level[leader2]++;
    }
} 
void dsu_union_(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    freopen("ICA-11.txt","r",stdin);
    int n,e;
    cin>>n>>e;
    dsu_ini(n);
    int cycle=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        if(dsu_find(a)==dsu_find(b))
        {
            cycle=1;
        }
        else
        {
            dsu_union(a,b);
        }

    }
    if(cycle)
    {
        cout<<"Cycle detected";
    }
    else
    {
        cout<<"No";
    }
}
