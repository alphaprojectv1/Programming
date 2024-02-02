// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// class Weighted{
//     public:
//     int a,b,c;
//     Weighted(int a,int b,int c)
//     {
//         this->a=a,this->b=b,this->c=c;
//     }
// };
// vector<Weighted> v;
// ll n,e,src,ts,dis[N];
// int main()
// {
//     cin>>n>>e;
//     while(e--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         v.push_back(Weighted{a,b,c});
//     }
//     for(int i=0;i<n;i++)
//     {
//         dis[i]=INT_MAX;
//     }
//     cin>>src>>ts;
//     dis[src]=0;
//     for(int i=1;i<n-1;i++)
//     {
//         for(auto it:v)
//         {
//             int u=it.a,v=it.b,c=it.c;
//             if(dis[u]<INT_MAX && c+dis[u]<dis[v])
//             {
//                 dis[v]=c+dis[u];
//             }
//         }
//     }
//     while(ts--)
//     {
//         ll l,r;
//         cin>>l>>r;
//         if(dis[l]<=r)
//         {
//             cout<<"YES";
//         }
//         else
//         {
//             cout<<"NO";
//         }
//         cout<<nl;
//     }
// }
#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
vector<pair<ll,ll>> v[N];
ll dis[N]={-1};
ll n,e,ts,d;
void dijkstra(pair<ll,ll>src)
{
    queue<pair<ll,ll>>q;
    dis[src.first]=0;
    q.push(src);
    while(!q.empty())
    {
        pair<ll,ll>pr=q.front();
        ll child=pr.first,cost=pr.second;
        q.pop();
        for(ll i=0;i<v[child].size();i++)
        {
            ll newchild=v[child][i].first,
            newcost=v[child][i].second;
            if(cost+newcost<dis[newchild])
            {
                dis[newchild]=cost+newcost;
                q.push({newchild,dis[newchild]});
            }
        }
    }
}
int main()
{
    cin>>n>>e;
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
    }
    for(ll i=0;i<=n;i++)
    {
        dis[i]=1e18;
    }
    cin>>d>>ts;
    dijkstra({d,0});
    while(ts--)
    {
        ll l,r;
        cin>>l>>r;
        if(dis[l]<=r)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<nl;
    }

}