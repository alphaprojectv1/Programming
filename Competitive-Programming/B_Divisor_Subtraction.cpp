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
bool check(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ll n,cnt=0;
    cin>>n;
    int mn=INT_MAX;
    while(n)
    {
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 && check(i))
        {
            mn=min(mn,i);
            break; 
        }
    }
    n-=mn;
    cnt++;
    }
    cout<<cnt;
    
}