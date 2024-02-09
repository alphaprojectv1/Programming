#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
using namespace std;
const int N=1e5+5;
vector<int> v[N];
bool vis[N]={0};
int level[N]={0};
int des,c;
bool bfs(ll src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    level[src]=0;
    while(!q.empty())
    {
        int pr=q.front();
        if(pr==des)
        {
            cout<<level[pr]<<nl;
            //return;
            if(level[pr]<=c)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        q.pop();
        for(auto it:v[pr])
        {
            if(!vis[it])
            {
                level[it]=level[pr]+1;
                vis[src]=1;
                q.push(it);
            }
        }
    }
    //return false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll src,des,c;
    cin>>src>>des>>c;
    //cout<<level[des]<<nl;
    if(bfs(src))
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO";
    }
}