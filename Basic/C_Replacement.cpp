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
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
    cin>>v[i];
    if(v[i]>0)
    {
        v[i]=1;
    }
    if(v[i]<0)
    {
        v[i]=2;
    }
 }
 for(auto it:v)
 {
    cout<<it<<blk;
 }


}