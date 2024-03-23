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
 ios::sync_with_stdio(0);
 cin.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n,k,t=0;
    cin>>n>>k;
    vector<int>v(n+1);
    vector<int>vis(N,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        vis[v[i]]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            t++;
        }
        if(t==k)
        {
            break;
        }
    }
    if(count(vis.begin()+1,vis.begin()+n+1,1)==n)
    {
        cout<<"YES"<<nl;
    }
    else 
    {
        cout<<"NO"<<nl;
    }
 }
}