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
int n,a[N],dis[N];
int solve(int x)
{
    int cost=INT_MAX;
    if(x<=0)
    {
        return 0;
    }
    if(dis[x]!=-1)
    {
        return dis[x];
    }
    cost=min(cost,solve(x-1)+abs(a[x]-a[x-1]));
    if(x>1)
    {
        cost=min(cost,solve(x-2)+abs(a[x]-a[x-2]));
    }
    return dis[x]=cost;
}
int32_t main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dis[i]=-1;
    }
    dis[n]=-1;
    cout<<solve(n-1);
}