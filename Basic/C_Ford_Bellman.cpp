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
class Cls{
    public:
    int a,b,c;
    Cls(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
}
};
int32_t main()
{
    int dis[N],n,e;
    cin>>n>>e;
    vector<Cls>v;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back({a,b,c});
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=30000;
    }
    dis[1]=0;
    for(int i=1;i<=n;i++)
    {
        for(auto it:v)
        {
            if(dis[it.a]<30000 && dis[it.a]+it.c<dis[it.b])
            {
                dis[it.b]=dis[it.a]+it.c;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<dis[i]<<blk;
    }
}