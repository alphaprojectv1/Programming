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
    int a[23],mx=INT_MIN,in;
    for(int i=1;i<=22;i++)
    {
        int r,w;
        cin>>r>>w;
        a[i]=r+(20*w);
        if(a[i]>mx)
        {
            mx=max(mx,a[i]);
            in=i;
        }
    }
    // for(int i=1;i<=22;i++)
    // {
    //     cout<<i<<"----"<<a[i]<<nl;
    // }
    cout<<in<<nl;
    //cout<<"--------"<<nl;
 }
}