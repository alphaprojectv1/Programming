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
string global="";
int32_t main()
{
 int ts;
 cin>>ts;
 while(ts--)
 {
    string s,tmp;
    cin>>s;
    tmp=global+global;
    if(tmp.find(s)!=-1)
    {
        continue;
    }
    global+=s;
 }
 cout<<global.size();
}