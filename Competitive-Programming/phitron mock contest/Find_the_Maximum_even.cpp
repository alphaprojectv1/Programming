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
 int n,mx=INT_MIN,mx1=INT_MIN;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
    cin>>v[i];
    if(v[i]%2==0)
    {
        mx1=v[i];
    }
 }
 if(n==1)
 {
    cout<<v[0]<<nl;
    return 0;
 }
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(i==j)
        {
            continue;
        }
        int tmp=v[i]+v[j];
        if(tmp%2==0 && v[i]!=v[j])
        {
            mx=max(mx,tmp);
        }
    }
 }
 cout<<max(mx1,mx)<<nl;
}