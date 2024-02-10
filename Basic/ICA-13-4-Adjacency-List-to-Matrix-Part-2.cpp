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
vector<pair<int,int>> v[N];
int adj[1005][1005],n;
void reset()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
}
void convert(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j].first<<" -> "<<v[i][j].second<<nl;
            adj[i][v[i][j].first]=v[i][j].second;
        }
    }
}
int main()
{
 #ifndef ONLINE_JUDGE
   freopen("ICA-13.txt","r",stdin);
   freopen("ICA-13-o.txt","a",stdout);
   cout<<"*******************"<<nl;
   #endif
 int n,e;
 cin>>n>>e;
 reset();
 while(e--)
 {
    int a,b,c;
    cin>>a>>b>>c;
    v[a].push_back({b,c});
 }
 convert(n);
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        cout<<adj[i][j]<<blk;
    }
    cout<<nl;
 }
}