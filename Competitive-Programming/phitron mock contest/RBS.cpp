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
    int cnt1=count(s.begin(),s.end(),')'),
    cnt2=count(s.begin(),s.end(),'(');
    if(cnt1==cnt2)
    {
        cout<<"Possible"<<nl;
    }
    else
    {
        cout<<"Impossible"<<nl;
    }
 }
}