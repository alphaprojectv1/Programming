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
    string s;
    cin>>s;
    int cnta=count(s.begin(),s.end(),'A'),cntb=count(s.begin(),s.end(),'B');
    if(cnta>cntb)
    {
        cout<<"A"<<nl;
    }
    else
    {
        cout<<"B"<<nl;
    }
 }
}