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
    string s,s1;
    cin>>s;
    s1=s;
    sort(s1.begin(),s1.end());
    if(s==s1)
    {
        cout<<"YES"<<nl;
    }
    else
    {
        if(s[1]=='b')
        {
            cout<<"YES"<<nl;
        }
        else if(s[0]=='a')
        {
            cout<<"YES"<<nl;
        }
        else if(s[2]=='c')
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
 }
}