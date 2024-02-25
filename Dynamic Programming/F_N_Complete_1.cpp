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
class Cmp{
    public:
    bool operator()(pair<int,int>x,pair<int,int>y)
    {
        return x.second<y.second;
    }
};
int n,e,dis[N],par[N];
vector<pair<int,int>> v[N];
void dijkstra(int x,int y)
{
    //queue<pair<int,int>>q;
    priority_queue<pair<int,int>,vector<pair<int,int>>,Cmp>q;
    q.push({x,y});
    dis[x]=0;
    while(!q.empty())
    {
        pair<int,int>pr=q.top();
        q.pop();
        int child=pr.first,cost=pr.second;
        for(auto it:v[child])
        {
            int nchild=it.first,ncost=it.second;
            if(dis[nchild]>ncost+cost)
            {
                dis[nchild]=cost+ncost;
                q.push({nchild,dis[nchild]});
                par[nchild]=child;
            }
        }
    }
}
int32_t main()
{
 cin>>n>>e;
 while(e--)
 {
    int a,b,c;
    cin>>a>>b>>c;
    v[a].push_back({b,c});
    v[b].push_back({a,c});
 }
 for(int i=0;i<=n;i++)
 {
    dis[i]=1e18+5,par[i]=-1;
 }
 dijkstra(1,0);
 if(dis[n]==(1e18+5))
 {
    cout<<-1;
    return 0;
 }
 int tmp=n;
 vector<int>p;
 while(tmp!=1)
 {
    p.push_back(tmp);
    tmp=par[tmp];
 }
 p.push_back(1);
 reverse(p.begin(),p.end());
 for(auto it:p)
 {
    cout<<it<<blk;
 }
}