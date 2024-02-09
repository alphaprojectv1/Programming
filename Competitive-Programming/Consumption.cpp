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
int main()
{
    double d,f;
    cin>>d>>f;
    cout<<fixed<<setprecision(3)<<d/f<<blk<<"km/l"<<nl;
    debug(d/f)
}