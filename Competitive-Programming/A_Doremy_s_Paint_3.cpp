#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==2)
    {
        cout<<"Yes"<<nl;
    }
    else
    {
        if(n%2!=0)
        {
            cout<<"Yes"<<nl;
        }
        else
        {
            cout<<"No"<<nl;
        }
    }
 }
}