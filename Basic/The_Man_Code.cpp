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
        int n;
        cin>>n;
        cout<<(n+1)/2<<blk<<(n-1)/2<<nl;
    }
}