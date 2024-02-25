/*https://atcoder.jp/contests/dp/tasks/dp_a*/
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
    int n;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
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
                int op1=dp[i-1][j-a[i-1]],
                op2=dp[i-1][j];
                dp[i][j]=op1 || op2;
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=s;j++)
    //     {
    //         cout<<dp[i][j];
    //     }
    //     cout<<nl;
    // }
    // cout<<s;
    vector<int>v;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(dp[i][j])
            {
                v.push_back(j);
            }
        }
    }
    int ans=INT_MAX;
    for(auto it:v)
    {
        cout<<it<<nl;
        int s1=it,s2=s-it;
        ans=min(ans,abs(s1-s2));
    }
    cout<<ans;
}