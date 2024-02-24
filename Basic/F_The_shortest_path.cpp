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
int n,e,s,d,vis[N],par[N];
vector<int> v[N];
void reset(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        vis[i]=0;
    }
}
void bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[x]=1;
    par[x]=0;
    while(!q.empty())
    {
        int pr=q.front();
        q.pop();
        for(auto it:v[pr])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
                par[it]=pr;
                if(it==d)
                {
                    return;
                }
            }
        }
    }
}
int32_t main()
{
    cin>>n>>e>>s>>d;
    reset(n);
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(s);
    if(vis[s])
    {
        int tr=d;
        vector<int>t;
        while(tr!=s)
        {
            t.push_back(tr);
            tr=par[tr];
        }
        t.push_back(s);
        reverse(t.begin(),t.end());
        cout<<t.size()-1<<nl;
        for(auto it:t)
        {
            cout<<it<<blk;
        }
    }
    else
    {
        cout<<-1;
    }
}