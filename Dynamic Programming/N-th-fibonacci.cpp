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
int solve(int i)
{
    if(i==0)
    {
        return 0;
    }
    if(i==1)
    {
        return 1;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    return dp[i]=solve(i-1)+solve(i-2);
}
int32_t main()
{
 int n;
 cin>>n;
 for(int i=0;i<=n;i++)
 {
    dp[i]=-1;
 }
 cout<<solve(n);
}
/*
Input: 20
Output: 
*/