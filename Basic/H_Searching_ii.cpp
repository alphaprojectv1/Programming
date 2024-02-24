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
 int r,c;
 cin>>r>>c;
 deque<int>d,e;
 while(r--)
 {
    int tmp;
    cin>>tmp;
    d.push_back(tmp);
 }
 while(c--)
 {
    int tmp;
    cin>>tmp;
    e.push_back(tmp);
 }
 for(auto it:d)
 {
    debug(it)
 }
 cout<<nl;
 sort(d.begin(),d.end());
 for(auto it:e)
 {
    cout<<upper_bound(d.begin(),d.end(),it)-d.begin()<<blk;
 }
}