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
int n,e,s,d,dis[N],par[N];
vector<pair<int,int>> v[N];
void dijkstra(int src)
{
    queue<pair<int,int>>q;
    q.push({src,0});
    dis[src]=0;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int x=pr.first,y=pr.second;
        for(auto it:v[x])
        {
            if(it.second+y<dis[it.first])
            {
                dis[it.first]=it.second+y;
                q.push({it.first,dis[it.first]});
                par[it.first]=x;

            }
        }
    }
}
int32_t main()
{
  cin>>n>>e>>s>>d;
  while(e--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    v[a].push_back({b,c});
    v[b].push_back({a,c});
  }
  for(int i=0;i<=n;i++)
  {
    dis[i]=INT_MAX;
    par[i]=-1;
  }
  dijkstra(s);
  if(dis[d]==INT_MAX)
  {
    cout<<-1;
    return 0;
  }
  cout<<dis[d]<<nl;
  vector<int>path;
  int tmp=d;
  while(tmp!=s)
  {
    path.push_back(tmp);
    tmp=par[tmp];
  }
  path.push_back(s);
  reverse(path.begin(),path.end());
  for(auto it:path)
  {
    cout<<it<<blk;
  }
}