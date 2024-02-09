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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=(c-a)*(c-a),y=(d-b)*(d-b),
    ans=sqrt(x+y);
    debug(ans)
    cout<<fixed<<setprecision(4)<<ans<<nl;
}
