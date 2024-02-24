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
 vector<int>v;
 while(n--)
 {
    int tmp;
    cin>>tmp;
    v.push_back(tmp);
 }
 int q;
 cin>>q;
 while(q--)
 {
    int a,b;
    cin>>a>>b;
    auto x=find(v.begin(),v.end(),a)-v.begin(),y=find(v.begin(),v.end(),b)-v.begin();
    int mn=min(x,y);
    cout<<v[mn]<<nl;
 }
}