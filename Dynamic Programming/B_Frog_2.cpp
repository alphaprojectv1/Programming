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
int dp[N];
int solve(int n,int k,int a[])
{
    int cost=INT_MAX;
    if(n==0)
    {
        return 0; 
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    for(int i=1;i<=k;i++)
    {
        if(n-i<0)
        {
            continue;
        }
        cost=min(cost,solve(n-i,k,a)+abs(a[n]-a[n-i]));
    }
    return dp[n]=cost;
}
int32_t main()
{
 int n,k;
 cin>>n>>k;
 int a[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    dp[i]=-1;
 }
 cout<<solve(n-1,k,a);
}