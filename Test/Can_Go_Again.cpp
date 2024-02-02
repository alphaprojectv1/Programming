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
    ll a,b,c;
    Edge(ll a,ll b,ll c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
ll n,e,src,ts;
vector<Edge>v;
int main()
{
    cin>>n>>e;
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v.push_back({a,b,c});
    }
    cin>>src>>ts;
    ll dis[1000];
    for(ll i=1;i<=n;i++)
    {
        dis[i]=1e18;
    }
    dis[src]=0;
    for(ll i=1;i<=n;i++)
    {
        for(Edge it:v)
        {
            if(dis[it.a]<1e18 && dis[it.b]>dis[it.a]+it.c)
            {
                dis[it.b]=it.c+dis[it.a];
            }
        }
    }
    bool cycle=0;
    for(Edge it:v)
        {
            if(dis[it.a]<1e18 && dis[it.b]>dis[it.a]+it.c)
            {
                cycle=1;
                break;
                dis[it.b]=it.c+dis[it.a];
            }
        }
    if(cycle)
    {
        cout<<"Negative Cycle Detected";
        return 0;
    }
    else
    {
        while(ts--)
        {
            ll tmp;
            cin>>tmp;
            if(dis[tmp]<1e18)
            {
                cout<<dis[tmp]<<nl;
            }
            else
            {
                cout<<"Not Possible"<<nl;
            }
        }
    }
}