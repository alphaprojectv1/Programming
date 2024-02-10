/*
4 4
1 0
0 2
0 3
2 3
*/
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
vector<int> v[N];
int n,e,adj[1005][1005];
void reset(int n)
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
            adj[i][v[i][j]]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj[i][j]<<blk;
        }
        cout<<nl;
    }
}
int main()
{
 #ifndef ONLINE_JUDGE
 freopen("ICA-13.txt","r",stdin);
 freopen("ICA-13-o.txt","a",stdout);
 #endif
 int n,e;
 cin>>n>>e;
 while(e--)
 {
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
 }
 reset(n);
 convert(n);
}