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
const int N=1e7+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int n;
 cin>>n;
 vector<int>v(n),pre(n);
 for(int i=0;i<n;i++)
 {
    cin>>v[i];
    if(i==0)
    {
        pre[i]=v[i];
        continue;
    }
    pre[i]=pre[i-1]*v[i];
 }
 int ts;
 cin>>ts;
 while(ts--)
 {
    int l,r,m=1;
    cin>>l>>r;
    for(int i=l-1;i<r;i++)
    {
        if(pre[i]==0)
        {
            cout<<0<<nl;
            break;
        }
    }
    cout<<1<<nl;
 }
}