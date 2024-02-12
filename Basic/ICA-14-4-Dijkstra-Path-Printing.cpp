/*
https://codeforces.com/problemset/problem/20/C
*/
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
class cmp
{
    public:
    bool operator()(pair<ll,ll>x,pair<ll,ll>y)
    {
        return x.second>y.second;
    }
};
vector<pair<int,int>> v[N];
ll dis[N],par[N];
ll n,e;
void reset(int n)
{
    for(int i=0;i<=n;i++)
    {
        dis[i]=INT_MAX;
        par[i]=-1;
    }
}
void dijkstra(ll src)
{
    priority_queue<pair<int,int>,vector<pair<ll,ll>>,cmp>q;
    q.push({src,0});
    dis[src]=0;
    while(!q.empty())
    {
        pair<int,int>pr=q.top();
        ll child=pr.first,cost=pr.second;
        q.pop();
        for(auto it:v[child])
        {
            ll newchild=it.first,newcost=it.second;
            if(dis[newchild]>cost+newcost)
            {
                dis[newchild]=cost+newcost;
                par[newchild]=child;
                q.push({newchild,dis[newchild]});
            }
        }
    }
}
int main()
{
    cin>>n>>e;
    reset(n);
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    ll si,sj;
    //cin>>si;
    //dijkstra(si);
    dijkstra(1);
    for(int i=1;i<n;i++)
    {
        debug(par[i]);
    }
    ll x=n;
    if(dis[n]==INT_MAX)
    {
        cout<<-1;
        return 0;
    }
    vector<ll>vi;
    while(x!=(-1))
    {
        debug(x);
        vi.push_back(x);
        x=par[x];
    }
    reverse(vi.begin(),vi.end());
    for(auto it:vi)
    {
        cout<<it<<nl;
    }
}
/*
5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 1 1
0 0 
*/