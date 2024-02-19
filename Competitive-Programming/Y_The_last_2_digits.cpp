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
const int N=1e5+5;
using namespace std;
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll multi=(a%100)*(b%100)*(c%100)*(d%100);
    if(multi%100<10)
    {
        cout<<"0"<<multi%100;
        return 0;
    }
    cout<<multi%100;
}