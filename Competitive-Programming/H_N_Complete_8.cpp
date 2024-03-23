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
vector<int> v[N];
int n,s,vis[N],dis[N];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    dis[src]=0;
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
                dis[it]=dis[pr]+1;
            }
        }
    }
}
int32_t main()
{
  cin>>n>>s;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
        int tmp;
        cin>>tmp;
        if(tmp)
        {
            v[i].push_back(j);
        }
        vis[i]=0;
        dis[i]=-1;
    }
  }
  bfs(s);
  for(int i=1;i<=n;i++)
  {
    cout<<dis[i]<<blk;
  }
}