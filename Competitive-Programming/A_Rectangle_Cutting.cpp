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
    int ts;
    cin>>ts;
    while(ts--)
    {
        int a,b;
        cin>>a>>b;
        if((a%2==0 && b%2==0) && (a%2==0 && b/2!=a) && (b%2==0 && a/2!=b) && (a!=1 && b!=1))
        {
            cout<<"Yes"<<nl;
        }
        else
        {
            cout<<"No"<<nl;
        }
    }
}