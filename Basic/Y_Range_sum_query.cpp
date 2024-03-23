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
 int n,q;
 cin>>n>>q;
 int a[n],p[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    if(i==0)
    {
        p[i]=a[i];
        //cout<<p[i]<<nl;
        continue;
    }
    p[i]=p[i-1]+a[i];
    //cout<<p[i]<<nl;
 }
 while(q--)
 {
    int x,y;
    cin>>x>>y;
    x-=1,y-=1;
    if(x==0)
    {
        cout<<p[y]<<nl;
        continue;
    }
    cout<<p[y]-p[x-1]<<nl;
 }

}