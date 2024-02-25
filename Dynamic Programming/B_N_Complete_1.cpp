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
int n,k,dis[N],a[N];
int solve(int x)
{
    int cost=INT_MAX;
    if(x==0)
    {
        return 0;
    }
    if(dis[x]!=-1)
    {
        return dis[x];
    }
    for(int i=1;i<=k;i++)
    {
        if(x>=i)
        {
            cost=min(solve(x-i)+abs(a[x]-a[x-i]),cost);
        }
    }
    return dis[x]=cost;
}
int32_t main()
{
 cin>>n>>k;
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    dis[i]=-1;
 }
 dis[n]=-1;
 cout<<solve(n-1);
}