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
int ts,n,dp[N];
bool solve(int x)
{
    if(x>n)
    {
        return 0;
    }
    if(x==n)
    {
        return 1;
    }
    if(dp[x]!=-1)
    {
        return dp[x];
    }
    return dp[x]=solve(x*2) || solve(x+3);
}
int32_t main()
{
 cin>>ts;
 while(ts--)
 {
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    if(solve(1))
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
 }
}