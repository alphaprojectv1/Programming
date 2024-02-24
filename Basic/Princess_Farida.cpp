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
int a[N],n,dp[N];
int solve(int i)
{
    if(i>=n)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    return dp[i]=max(solve(i+1),a[i]+solve(i+2));
}
int32_t main()
{
 int ts;
 cin>>ts;
 for(int it=1;it<=ts;it++)
 {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dp[i]=-1;
    }
    cout<<"Case "<<it<<": "<<solve(0)<<nl;
 } 
}
