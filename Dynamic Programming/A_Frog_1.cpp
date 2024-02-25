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
int mn_cost(int n,int a[])
{
    int op=INT_MAX;
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    op=min(op,mn_cost(n-1,a)+abs(a[n]-a[n-1]));
    if(n>1)
    op=min(op,mn_cost(n-2,a)+abs(a[n]-a[n-2]));
    return dp[n]=op;
}
int32_t main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dp[i]=-1;
    }
    dp[n]=-1;
    cout<<mn_cost(n-1,a);
}