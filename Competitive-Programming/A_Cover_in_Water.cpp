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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            cnt++;
            ans++;
        }
        else
        {
            cnt=0;
        }
        if(cnt>2)
        {
            break;
        }
    }
    if(cnt>2)
    {
        cout<<2<<nl;
    }
    else
    {
        cout<<ans<<nl;
    }
 }
}