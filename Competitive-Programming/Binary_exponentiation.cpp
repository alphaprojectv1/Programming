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
int binpow(int a,int n)
{
    int res=1;
    while(n)
    {
    if(n&1)
    {
        res*=a;
    }
    else
    {
    res*=res;
    }
    n>>=1;
    }
    return res;

}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 cout<<(2&1)<<nl;
 cout<<(2>>1)<<nl;
 cout<<binpow(4,2);

 
}