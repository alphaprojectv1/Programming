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
const int N=1e6+5;
using namespace std;
pair<int,int> a[N];
int dp[105][N];
int solve(int x,int y)
{
    if(x<0 || y<=0)
    {
        return 0;
    }
    if(dp[x][y]!=-1)
    {
        return dp[x][y];
    }
    if(a[x].first<=y)
    {
        return dp[x][y]=max(solve(x-1,y-a[x].first)+a[x].second,solve(x-1,y));
    }
    else
    {
        return dp[x][y]=solve(x-1,y);
    }
}
int32_t main()
{
 int n,w;
 cin>>n>>w;
 for(int i=0;i<n;i++)
 {
    int x,y;
    cin>>x>>y;
    a[i]={x,y};
 }
 for(int i=0;i<=n;i++)
 {
    for(int j=0;j<=w;j++)
    {
        dp[i][j]=-1;
    }
 }
 cout<<solve(n,w);
}
