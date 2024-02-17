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
int n,e;
vector<ll> adj[N];
bool vis[N];
void reset(int n)
{
    
}
int main()
{
    
    cin>>n>>e;
    while(e--)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int ts;
    cin>>ts;
    while(ts--)
    {
        ll a,b;
        
    }
}