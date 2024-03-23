#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    int a[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            p[i]=a[i];
        }
        else
        {
            p[i]=p[i-1]+a[i];
        }
    }
    int ts;
    cin>>ts;
    while(ts--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)
        {
            cout<<p[r]<<nl;
            continue;
        }
        cout<<p[r]-p[l-1]<<nl;
    }
}