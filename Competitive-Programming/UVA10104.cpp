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
 int a,b;
 while(cin>>a>>b)
 {
    int gcd=__gcd(a,b);
    int case1=a+b,
    case2=a*(-1)+b,case3=a+b*(-1),
    case4=a-b;
    if(case1==gcd)
    {
        cout<<1<<blk<<1<<gcd<<nl;
    }
    else if(case2==gcd)
    {
        cout<<-1<<blk<<1<<blk<<gcd<<nl;
    }
    else if(case3==gcd)
    {
        cout<<1<<blk<<-1<<blk<<gcd<<nl;
    }
    else if(case4==gcd)
    {
        cout<<1<<blk<<-1<<gcd<<nl;
    }
    else if(gcd==a && gcd==b)
    {
        cout<<0<<blk<<1<<blk<<gcd<<nl;
    }
 }
}