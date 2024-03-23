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
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n;
    cin>>n;
    deque<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=1;i<n-1;i++)
    {
        if(v[i-1]>v[i+1] || v[i]<2*v[i-1])
        {
            continue;
        }
        v[i+1]-=v[i-1];
        v[i]-=(2*v[i-1]);
        v[i-1]=0;
    }
    if(count(v.begin(),v.end(),0)==n)
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
 }
}
