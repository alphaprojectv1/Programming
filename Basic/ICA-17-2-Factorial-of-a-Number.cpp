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
ll fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    ll multi=n*fact(n-1);
    return multi;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}