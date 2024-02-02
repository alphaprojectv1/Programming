#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    //freopen("ICA-7.txt","r",stdin);
    ll n,e;
    cin>>n>>e;
    ll adj[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            adj[i][j]=INT_MAX;
        }
    }
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a][b]=c;
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(adj[i][k]+adj[k][j]<adj[i][j])
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                }
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(adj[i][i]<0)
        {
            cout<<"Cycle Detected";
            break;
        }
        else
        {
            cout<<adj[i][i]<<nl;
        }
    }
}