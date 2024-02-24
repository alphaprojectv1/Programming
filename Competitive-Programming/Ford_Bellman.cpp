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
int n,e,dis[N];
class Cls{
    public:
    int u,v,c;
    Cls(int u,int v,int c)
    {
        this->c=c;
        this->v=v;
        this->u=u;
    }
};
vector<Cls>a;
int32_t main()
{
 cin>>n>>e;
 while(e--)
 {
    int u,v,c;
    cin>>u>>v>>c;
    a.push_back({u,v,c});
 }
 for(int i=1;i<=n;i++)
 {
    dis[i]=30000;
 }
 dis[1]=0;
 for(int i=2;i<=n;i++)
 {
    for(auto it:a)
    {
        if(dis[it.u]<30000 && it.c+dis[it.u]<dis[it.v])
        {
            dis[it.v]=dis[it.u]+it.c;
        }
    }
 }
 for(int i=1;i<=n;i++)
 {
    cout<<dis[i]<<blk;
 }
}
