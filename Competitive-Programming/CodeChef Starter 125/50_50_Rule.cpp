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
 int ts;
 cin>>ts;
 while(ts--)
 {
    int x,y;
    cin>>x>>y;
    if(x<50)
    {
        cout<<"Z"<<nl;
    }
    else if(x>=50 && y<=49)
    {
        cout<<"F"<<nl;
    }
    else
    {
        cout<<"A"<<nl;
    }
 }

 
}