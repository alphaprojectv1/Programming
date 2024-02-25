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
int n,a[N],dp[N];
int solve(int x)
{
    int mx;
    if(x>=n)
    {
        return 0;
    }
    if(dp[x]!=-1)
    {
      return dp[x];
    }
    mx=max(solve(x+1),solve(x+2)+a[x]);
    return dp[x]=mx;
}
int32_t main()
{
  int ts;
  cin>>ts;
  for(int i=1;i<=ts;i++)
  {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dp[i]=-1;
    }
    cout<<"Case "<<i<<": "<<solve(0)<<nl;
  }
}