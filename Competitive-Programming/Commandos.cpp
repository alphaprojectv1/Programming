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
int n,e,s,d,d_s[N],d_d[N],vis[N];
vector<int> v[N];
void reset(int n)
{
    for(int i=0;i<n;i++)
    {
        v[i].clear();
        vis[i]=0;
        d_d[i]=-1;
        d_s[i]=-1;
    }
}
void dfs1(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    d_s[src]=0;
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
                d_s[it]=d_s[pr]+1;
            }
        }
    }
}
void dfs2(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    d_d[src]=0;
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
                d_d[it]=d_d[pr]+1;
            }
        }
    }
}
int32_t main()
{
    int ts,k=1;
    cin>>ts;
    reset(n);
    while(ts--)
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
        cin>>s>>d;
        dfs1(s);
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
        }
        dfs2(d);
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,d_s[i]+d_d[i]);
        }
        cout<<"Case "<<k++<<":"<<blk<<ans<<nl;
        for(int i=0;i<n;i++)
        {
            v[i].clear();
        }

    }
}
