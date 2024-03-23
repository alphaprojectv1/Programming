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
int ts,s,d,n,e,vis[N],par[N];
vector<int> v[N];
void reset(int x){for(int i=0;i<=x;i++){vis[i]=0,par[i]=-1;}}
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
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
            }
        }
    }
}
int32_t main()
{
//  cin>>ts;
//  while(ts--)
 {
    cin>>n>>e>>s>>d;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    reset(n);
    bfs(s);
    if(!vis[d])
    {
        cout<<-1<<nl;
        return 0;
    }
    int tmp=d;
    vector<int>path;
    while(tmp!=-1)
    {
        path.push_back(tmp);
        tmp=par[tmp];
    }
    reverse(path.begin(),path.end());
    cout<<path.size()-1<<nl;
    for(auto it:path)
    {
        cout<<it<<blk;
    }
 }
}