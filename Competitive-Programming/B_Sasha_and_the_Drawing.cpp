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
    ll ts;
    cin>>ts;
    while(ts--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==(4*(n)-2)) 
        {
            cout<<(k/2)+1<<nl;
        }
        else if(k%2!=0)
        {
            cout<<(k/2)+1<<nl;
        }
        else
        {
            cout<<k/2<<nl;
        }
    }
}