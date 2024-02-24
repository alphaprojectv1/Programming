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
vector<int> v[N];
int vis[N],cnt=0;
void dfs(int src)
{
    vis[src]=1;
    for(auto it:v[src])
    {
        if(!vis[it])
        {
            dfs(it);
        }
    }
}
int32_t main()
{
 int n,e;
 cin>>n>>e;
 for(int i=0;i<=n;i++)
 {
    vis[i]=0;
 }
 set<int>st;
 while(e--)
 {
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
    st.insert(a);
    st.insert(b);
 } 
 dfs(1);
 if(st.size()!=n)
 {
    cout<<"NO";
    return 0;
 }
 else
 {
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
 }
 
}
