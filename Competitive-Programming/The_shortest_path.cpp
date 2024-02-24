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
int n,e,s,d;
vector<pair<int,int>> v[N];
int dis[N],par[N];
void reset(int x)
{
    for(int i=0;i<=x;i++)
    {
        par[i]=-1;
        dis[i]=INT_MAX;
    }
}
void dijskstra(int src)
{
    queue<pair<int,int>>q;
    q.push({src,0});
    dis[src]=0;
    par[src]=src;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int ch=pr.first,co=pr.second;
        for(auto it:v[ch])
        {
            int nch=it.first,nco=it.second;
            if(dis[nch]>nco+co)
            {
                dis[nch]=nco+co;
                q.push({nch,dis[nch]});
                par[nch]=ch;
            }
        }
    }
}
int32_t main()
{
 cin>>n>>e>>s>>d;
 reset(n);
 while(e--)
 {
    int a,b,c;
    cin>>a>>b>>c;
    v[a].push_back({b,c});
    v[b].push_back({a,c});
 }
 dijskstra(s);
 debug(dis[d])
 if(dis[d]==INT_MAX)
 {
    cout<<-1;
    return 0;
 }
 vector<int>vi;
 int tmp=d;
 vi.push_back(d);
 while(tmp!=s)
 {
    tmp=par[tmp];
    debug(tmp)
    vi.push_back(tmp);
 }
 reverse(vi.begin(),vi.end());
 for(int i=s;i<n;i++)
 {
    debug(par[i])
    debug(dis[i])
 }
 cout<<dis[d]<<nl;
 for(auto it:vi)
 {
    cout<<it<<blk;
 }
}
