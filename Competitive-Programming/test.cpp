#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
using namespace std;
const int N=1e5+5;
ll binpow(ll x,ll y)
{
    if(y==0)
    {
        return 1;
    }
    ll res=1;
    while(y)
    {
        if(y&1)
        {
            res=res*x;
        }
        x*=x;
        y>>=1;
    }
    return res;
}
int main()
{
    cout<<binpow(2,2);
}