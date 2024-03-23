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
 int a[n],p[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    if(i==0)
    {
        p[i]=a[i];
        continue;
    }
    p[i]=p[i-1]+a[i];
 }
 for(int i=n-1;i>=0;i--)
 {
    cout<<p[i]<<blk;
 }
}