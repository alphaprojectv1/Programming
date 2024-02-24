#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int n,e,s,d,vis[N],par[N],dis[N];
vector<int> v[N];
void reset(int x)
{
    for(int i=0;i<=x;i++)
    {
        vis[i]=0;
        par[i]=-1;
        dis[i]=-1;
    }
}
void bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[x]=1;
    dis[x]=0;
    while(!q.empty())
    {
        int pr=q.front();
        q.pop();
        for(auto it:v[pr])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it]=1;
                par[it]=pr;
                dis[it]=dis[pr]+1;
            }
        }
    }
}
int32_t main()
{
    cin>>n>>e;
    reset(n);
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    vector<int>a;
    int tmp=n;
    while(tmp != -1)
    {
        a.push_back(tmp);
        tmp=par[tmp];
    }
    if(dis[n]==-1)
    {
        cout<<"IMPOSSIBLE"<<nl;
        return 0;
    }
    cout<<a.size()<<nl;
    reverse(a.begin(),a.end());
    for(auto it:a)
    {
        cout<<it<<blk;
    }
}