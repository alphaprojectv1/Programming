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
        ll n;
        cin>>n;
        deque<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=(v[i]-v[i-1]);
        }
        cout<<sum<<nl;
    }
}