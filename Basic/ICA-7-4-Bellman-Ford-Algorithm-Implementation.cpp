#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
class Edge
{
    public:
    int u,v,c;
    Edge(int u,int v,int c)
    {
        this->c=c;
        this->v=v;
        this->u=u;
    }    
};
int dis[N];
vector<Edge>el;
int main()
{
    freopen("ICA-7.txt","r",stdin);
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int u,v,c;
        cin>>u>>v>>c;
        el.push_back({u,v,c});
        //el.push_back(Edge(u,v,c));
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    for(int i=1;i<n;i++)
    {
        for(Edge it:el)
        {
            if(dis[it.u]<INT_MAX && it.c+dis[it.u]<dis[it.v])
            {
                dis[it.v]=it.c+dis[it.u];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> "<<dis[i]<<nl;
    }
}
/*
Input:
4 4
0 2 5
0 3 12
2 1 2
1 3 3
Output:
0 -> 0
1 -> -1
2 -> -2
3 -> -4
*/