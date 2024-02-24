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
int par[N],group[N],n,e,vis[N];
void _ini(int n)
{
    for(int i=0;i<=n;i++)
    {
        par[i]=-1;
        group[i]=1;
        vis[i]=0;
    }
}
int _find(int x)
{
    if(par[x]==-1)
    {
        return x;
    }
    int l=_find(par[x]);
    return l;
}
void _union(int x,int y)
{
    if(group[_find(x)]>group[_find(y)])
    {
        par[_find(y)]=_find(x);
        group[_find(x)]+=group[_find(y)];
    }
    else if(group[_find(x)]>group[_find(y)])
    {
        par[_find(x)]=_find(y);
        group[_find(y)]+=group[_find(x)];
    }
    else
    {
        par[_find(y)]=_find(x);
        group[_find(x)]+=group[_find(y)];
    }
}
vector<int> v[N];
void check(int src)
{
    vis[src]=1;
    for(auto it:v[src])
    {
        if(!vis[it])
        {
            check(it);
        }
    }
}
int32_t main()
{
    set<int>st;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        st.insert(a);
        st.insert(b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    check(1);
    if(st.size()!=n)
    {
        cout<<"NO"<<nl;
    }
    else
    {
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
}