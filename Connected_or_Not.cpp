#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    int n,e;
    cin>>n>>e;
    int v[n][n]={0};
    bool vis[n]={0};
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a][b]=1;
        vis[a]=1;
    }
    int ts;
    cin>>ts;
    while(ts--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"YES"<<nl;
        }
        else if(v[a][b]==1)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }

}