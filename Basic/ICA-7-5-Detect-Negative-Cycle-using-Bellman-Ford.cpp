#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
class Edge{
    public:
    int a,b,c;
    Edge(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
int main()
{
    //freopen("ICA-7.txt","r",stdin);
    vector<Edge>v;
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back({a,b,c});
    }
    int dis[N];
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    for(int i=1;i<n-1;i++)
    {
        for(Edge it:v)
        {
            if(dis[it.a]<INT_MAX && it.c+dis[it.a]<dis[it.b])
            {
                dis[it.b]=it.c+dis[it.a];
            }
        }
    }
    bool cycle=0;
    for(Edge it:v)
    {
        if(dis[it.a]<INT_MAX &&it.c+dis[it.a]<dis[it.b])
        {
            cycle=1;
            break;
            dis[it.b]=it.c+dis[it.a];
        }
    }
    if(cycle)
    {
        cout<<"Cycle detected"<<nl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<dis[i]<<nl;
    }
}
/*
Input:
4 4
1 3 -3
0 3 5
2 1 1
0 2 -2
*/
