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
void dfs(int s)
{
    vis[s]=1;
    for(auto it:v[s])
    {
        if(vis[it] && par[s]!=it)
        {
            cnt=1;
        }
        if(!vis[it])
        {
            vis[it]=1;
            par[it]=s;
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
            if(tmp==1)
            {
                v[j].push_back(i);
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        vis[i]=0;
        par[i]=-1;
    }
    par[1]=0;
    dfs(1);
    if(cnt)
    {
        cout<<1<<nl;
    }
    else
    {
        cout<<0<<nl;
    }
}