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
    int n,x;
    cin>>n>>x;
    int a[n],mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // if(n==1)
    // {
    //     cout<<min(x,a[0]);
    //     continue;
    // }
    for(int i=1;i<n;i++)
    {
        mx=max(mx,a[i]-a[i-1]);
    }
    mx=max(mx,a[0]);
    mx=max(mx,(x-a[n-1])*2);
    cout<<mx<<nl;
 }
}