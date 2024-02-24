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
int m,weight[N],value[N],mw,dp[1000][1000];
pair<int,int> a[N];
int knapsack(int n,int w)
{
    if(n<0 || w<=0)
    {
        return 0;
    }
    if(dp[n][w]!=-1)
    {
        return dp[n][w];
    }
    if(a[n].first<=w)
    {
        int op1=knapsack(n-1,w-a[n].first)+a[n].second;
        int op2=knapsack(n-1,w);
        return dp[n][w]=max(op1,op2);
    }
    else
    {
        int op=knapsack(n-1,w);
        return dp[n][w]=op;
    }
}
int32_t main()
{
 cin>>m>>mw;
 for(int i=0;i<1000;i++)
 {
    for(int j=0;j<1000;j++)
    {
        dp[i][j]=-1;
    }
 }
 for(int j=0;j<m;j++)
 {
    cin>>a[j].first>>a[j].second;
 }
//  for(int i=0;i<m;i++)
//  {
//     cin>>value[i];
//  }
 cout<<knapsack(m,mw);
}
/*
4 8
2 3 4 5
1 3 5 3
*/