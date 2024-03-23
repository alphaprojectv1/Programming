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
class cmp
{
    public:
    bool operator()(pair<int,int>x,pair<int,int>y)
    {
        return x.second<y.second;
    }
};
int n,e,s,d,dis[N],par[N];
vector<pair<int,int>> v[N];
void dijkstra(pair<int,int>src)
{
    //priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q;
    queue<pair<int,int>>q;
    q.push(src);
    dis[src.first]=0;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int child=pr.first,cost=pr.second;
        for(auto it:v[child])
        {
            int newchild=it.first,newcost=it.second;
            if(dis[newchild]>cost+newcost)
            {
                dis[newchild]=cost+newcost;
                q.push({newchild,dis[newchild]});
                par[newchild]=child;
            }
        }
    }


}
int32_t main()
{
 cin>>n>>e>>s>>d;
 while(e--)
 {
    int a,b,c;
    cin>>a>>b>>c;
    v[a].push_back({b,c});
    v[b].push_back({a,c});
 }
 for(int i=0;i<=n;i++)
 {
    dis[i]=INT_MAX;
    par[i]=-1;
 }
 dijkstra({s,0});
 if(dis[d]==INT_MAX)
 {
    cout<<-1<<nl;
    return 0;
 }
 vector<int>path;
 int tmp=d;
 while(tmp!=-1)
 {
    path.push_back(tmp);
    tmp=par[tmp];
 }
 reverse(path.begin(),path.end());
 cout<<dis[d]<<nl;
 for(auto it:path)
 {
    cout<<it<<blk;
 }
}