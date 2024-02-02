#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
ll vis[8][8];
pair<int,int> d[8]={{-2,1},{-2,-1},
                    {2,1},{2,-1},{1,-2},{1,2},{-1,2},{-1,-2}};
ll a[8][8];
ll ts,n,m,ki,kj,qi,qj,level;
bool valid(ll x,ll y)
{
    if(x<=0 || y<=0 || x>=7 || y>=7)
    {
        return false;
    }
    return true;
}
void dfs(ll si,ll sj)
{
    vis[si][sj]=1;
    // level++;
    for(ll i=0;i<8;i++)
    {
        ll ci=si+d[i].first,cj=sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj])
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    //cin>>ts;
    ts=1;
    while(ts--)
    {
        a[8][8]={0},vis[8][8]={0},level=0;
        cin>>n>>m;
        cin>>ki>>kj;
        cin>>qi>>qj;
        dfs(ki,kj);
        cout<<vis[qi][qj]<<nl;
        if(vis[qi][qj])
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
}
