#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
vector<pair<int,int>> v[N];
int dis[N];
void dijkstra(pair<int,int>src)
{
    queue<pair<int,int>>q;
    q.push(src);
    dis[src.first]=0;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int child=pr.first,cost=pr.second;
        for(int i=0;i<v[child].size();i++)
        {
            if(cost+v[child][i].second<dis[v[child][i].first])
            {
                dis[v[child][i].first]=cost+v[child][i].second;
                q.push({v[child][i].first,dis[v[child][i].first]});
            }
        }
    }
}
int main()
{
    freopen("ICA-6.txt","r",stdin);
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dijkstra({0,0});
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> "<<dis[i]<<nl;
    }
}
/*
Input:
5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 1 1
Output:
0 -> 0
1 -> 5
2 -> 6
3 -> 4
4 -> 8
*/