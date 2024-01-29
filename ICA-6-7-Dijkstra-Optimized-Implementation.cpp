#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
vector<pair<int,int>> v[N];
int dis[N];
class cmp
{
    public:
    bool operator() (pair<int,int>x,pair<int,int>y)
    {
        return x.second>y.second;
    }
};
void dijkstra(pair<int,int>src)
{
    //queue<pair<int,int>>q;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q;
    q.push(src);
    dis[src.first]=0;
    while(!q.empty())
    {
        //pair<int,int>pr=q.front();
        pair<int,int>pr=q.top();
        q.pop();
        //int child=pr.first,cost=pr.second;
        for(int i=0;i<v[pr.first].size();i++)
        {
            if(pr.second+v[pr.first][i].second<dis[v[pr.first][i].first])
            {
                dis[v[pr.first][i].first]=pr.second+v[pr.first][i].second;
                q.push({v[pr.first][i].first,dis[v[pr.first][i].first]});
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
// /*
// Input:
// 5 8
// 0 1 10
// 0 2 7
// 0 3 4
// 1 4 3
// 2 4 5
// 2 1 1
// 3 4 5
// 3 1 1
// Output:
// 0 -> 0
// 1 -> 5
// 2 -> 6
// 3 -> 4
// 4 -> 8
//problem:
//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
//https://www.eolymp.com/en/problems/1365
//https://cses.fi/problemset/task/1667
// */
