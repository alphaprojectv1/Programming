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
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans=fib(n-1)+fib(n-2);
    dp[n]=ans;
    return ans;
}
int32_t main()
{
  int n;
  cin>>n;
  memset(dp,-1,sizeof(dp));
  cout<<fib(n);
}
/*
Input:
50
Output:
12586269025
*/