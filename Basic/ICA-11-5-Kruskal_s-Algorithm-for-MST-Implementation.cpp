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
class Edge{
    public:
    int u,v,w;
    Edge(int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
vector<Edge>vi;
int par[N];
int level[N];
bool cmp(Edge x,Edge y)
{
    return x.w<y.w;
}
void dsu_ini(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        level[i]=0;
    }
}
int dsu_find(int node)
{
    if(par[node]==(-1))
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
    if(level[leader1]>level[leader2])
    {
        par[leader2]=leader1;
    }
    else if(level[leader1]<level[leader2])
    {
        par[leader1]=leader2;
    }
    else
    {
        par[leader1]=leader2;
        level[leader2]++;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("ICA-11.txt","r",stdin);
      //freopen("ICA-13-o.txt","a",stdout);
      cout<<"*******************"<<nl;
      #endif
    int n,e;
    cin>>n>>e;
    dsu_ini(n);
    while(e--)
    {
    int u,v,w;
    cin>>u>>v>>w;
    vi.push_back({u,v,w});
    }
    sort(vi.begin(),vi.end(),cmp);
    for (int i = 0;i<vi.size(); i++)
    {
        /* code */
        cout<<vi[i].u<<blk<<vi[i].v<<blk<<vi[i].w<<nl;
    }
    int totalcost=0;
    for(Edge it:vi)
    {
        if(dsu_find(it.u)==dsu_find(it.v))
        {
            continue;
        }
        else
        {
            dsu_union(it.u,it.v);
            totalcost+=it.w;
        }
    }
    cout<<totalcost;

}
/*
Input 1:
6 10
0 1 5
0 2 6
0 3 8
0 4 6
0 5 10
3 5 2
5 1 4
1 2 3
2 4 8
4 3 6
Input 2:
5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5
*/
