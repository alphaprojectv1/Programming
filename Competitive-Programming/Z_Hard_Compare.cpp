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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*log10(a)>d*log10(c))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}