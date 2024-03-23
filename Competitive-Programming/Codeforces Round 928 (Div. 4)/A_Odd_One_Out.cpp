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
    int a[3];
    for(int i=0;i<3;i++){cin>>a[i];}
    if(a[0]==a[1])
    {
        cout<<a[2]<<nl;
    }
    else if(a[0]==a[2])
    {
        cout<<a[1]<<nl;
    }
    else if(a[1]==a[2])
    {
        cout<<a[0]<<nl;
    }
 }
}