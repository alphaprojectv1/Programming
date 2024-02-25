#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#define YES cout<<"YES"<<nl;
#define NO  cout<<"NO"<<nl;
#define No cout<<"No"<<nl;
#define Yes cout<<"Yes"<<nl;
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int n,dp[N];
bool solve(int ans)
{
    if(n<ans)
    {
        return 0;
    }
    if(dp[ans]!=-1)
    {
        return dp[ans];
    }
    else if(ans==n)
    {
        return dp[ans]=ans;
    }
    else
    {
        return dp[ans]=(solve(ans+3) || solve(ans*2));
    }
}
int32_t main()
{
 int ts;
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
        YES
    }
    else
    {
        NO
    }
 }
}