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
int ts,n,w,a[N],wi[N],dp[1005][1005];
int solve(int x,int y)
{
    if(x==0 || y==0)
    {
        return 0;
    }
    if(dp[x][y]!=-1)
    {
        return dp[x][y];
    }
    if(wi[x-1]<=y)
    {
        return dp[x][y]=
        max(solve(x-1,y-wi[x-1])
        +a[x-1],solve(x-1,y));
    }
    else
    {
        return dp[x][y]=(solve(x-1,y));
    }
}
int32_t main()
{
 cin>>ts;
 while(ts--)
 {
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {
        cin>>wi[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<solve(n,w)<<nl;

 }
}