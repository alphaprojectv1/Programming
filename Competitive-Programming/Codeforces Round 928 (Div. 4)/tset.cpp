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
 string s;
 cin>>s;
 vector<char>v;
 for(auto it:s)
 {
    if('a'<=it && it<='z')
    {
        it=it-'a'+'A';
    }
    v.push_back(it);
 }
 for(auto it:v)
 {
    cout<<it;
 }
}