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
int n,w,dis[N];
pair<int,int> a[N];
int solve(int x,int y)
{
    if(x<0 || y<=0)
    {
        return 0;
    }
    if(a[x].first<=y)
    {
        return max(solve(x-1,y-a[x].first)+a[x].second,solve(x-1,y));
    }
    else 
    {
        return solve(x-1,y);
    }
}
int32_t main()
{
 cin>>n>>w;
 for(int i=0;i<n;i++)
 {
    int x,y;
    cin>>x>>y;
    a[i].first=x,a[i].second=y;
 }
 cout<<solve(n,w);
}