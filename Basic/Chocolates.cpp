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
int32_t main()
{
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2!=0)
    {
        cout<<"NO"<<nl;
        continue;
    }
    s/=2;
    int dp[n+1][s+1];
    for(int i=1;i<=s;i++)
    {
        dp[0][i]=0;
    }
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][s])
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
 }
}