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
int main()
{
    int a,b,d;
    cin>>a>>b>>d;
    for(int i=a;i<=b;i=i+d)
    {
        cout<<i<<blk;
    }
}