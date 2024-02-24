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
 string s;
 cin>>s;
 int q;
 cin>>q;
 while(q--)
 {
    char a,b;
    cin>>a>>b;
    replace(s.begin(),s.end(),a,b);
 }
 cout<<s<<nl;
}