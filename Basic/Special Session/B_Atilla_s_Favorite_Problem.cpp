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
    vector<char>v;
    int n,mx=INT_MIN;
    cin>>n;
    while(n--)
    {
        char tmp;
        cin>>tmp;
        v.push_back(tmp);
        mx=max(mx,(int)tmp);
    }
    cout<<mx-96<<nl;
 }
}