#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 vector<int>v;
 while(1)
 {
    int t;
    cin>>t;
    v.push_back(t);
    if(t==0)
    {
        break;
    }
 }
 reverse(v.begin(),v.end());
 for(auto it:v)
 {
    cout<<it<<nl;
 }
 
}