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
int n,vis[N],par[N],cnt=0;
vector<int> v[N];
void dfs(int src)
{
    // if(vis[src])
    // {
    //     cnt=1;
    //     return;
    // }
    vis[src]=1;
    for(auto it:v[src])
    {
        if(vis[it] && par[src]!=it)
        {
            cnt++;
            return;
        }
        if(!vis[it])
        {
            par[it]=src;
            dfs(it);
        }
    }
}
int32_t main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
        int tmp;
        cin>>tmp;
        vis[j]=0;
        par[j]=0;
        if(tmp)
        {
            v[j].push_back(i);
            //v[j].push_back(i);
        }
    }
  }
//   for(auto i:v[1])
//   {
//     if(!vis[i])
//     {
//       vis[i]=1;
//       dfs(i);
//     }
//   }
  dfs(1);
  if(cnt)
  {
    cout<<1;
    return 0;
  }
  cout<<0;
}
