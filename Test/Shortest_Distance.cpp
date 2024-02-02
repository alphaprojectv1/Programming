#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    ll n,e;
    cin>>n>>e;
    ll a[n+1][n+1];
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            a[i][j]=1e18;
            if(i==j)
            {
                a[i][j]=0;
            }
        }
    }
    while(e--)
    {
        ll adj,b,c;
        cin>>adj>>b>>c;
        a[adj][b]=min(c,a[adj][b]);
    }
    for(ll k=1;k<=n;k++)
    {
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if((a[i][k]+a[k][j])<a[i][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
    }
    ll ts;
    cin>>ts;
    //ts=1;
    while(ts--)
    {
        ll l,r;
        cin>>l>>r;
        if(a[l][r]>=1e18)
        {
            cout<<-1<<nl;
        }
        else
        {
            cout<<a[l][r]<<nl;
        }
        // for(ll i=0;i<=n;i++)
        // {
        //     for(ll j=0;j<=n;j++)
        //     {
        //         cout<<i<<blk<<a[i][j]<<blk<<j<<nl;
        //     }
        // }
    }
}
