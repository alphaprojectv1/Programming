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
  int a[n],sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  //sum/=2;
  int dp[n+1][sum+1];
  for(int i=1;i<=sum;i++)
  {
    dp[0][i]=0;
  }
  dp[0][0]=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<=sum;j++)
    {
        if(a[i-1]<=j)
        {
            int op1=dp[i-1][j-a[i-1]],
            op2=dp[i-1][j-a[i-1]];
            dp[i][j]=op1 || op2;
        }
        else
        {
            dp[i][j]=dp[i-1][j];
        }
    }
  }
  deque<int>d;
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=sum;j++)
    {
        if(dp[i][j])
        {
            d.push_back(j);
        }
    }
  }
  int ans=INT_MAX;
  for(auto it:d)
  {
    int s1=it,s2=sum-s1;
    ans=min(ans,abs(s1-s2));
  }
    cout<<ans;
}
/*
Input:
4 
1 5 4 11
Output:
1
*/