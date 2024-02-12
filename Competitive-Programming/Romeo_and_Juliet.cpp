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
bool vis[N];
int level[N];
int des,c;
void reset(int n)
{
    for(int i=0;i<n;i++)
    {
        vis[i]=0;
        level[i]=-1;
    }
}
void bfs(ll src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    level[src]=0;
    while(!q.empty())
    {
        int pr=q.front();
        q.pop();
        for(auto it:v[pr])
        {
            if(!vis[it])
            {
                level[it]=level[pr]+1;
                vis[it]=1;
                q.push(it);
            }
        }
    }
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
    ll x,y,c;
    cin>>x>>y>>c;
    reset(n);
    bfs(x);
    if(level[y]!=(-1) && level[y]<= c*2)
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO";
    }
}
/*
Input 1:
8 9
0 1
4 0
4 2
2 3
1 3
2 5
5 6
6 7
6 3
4 7 2
Output:
YES
Input 2:
8 9
0 1
4 0
4 2
2 3
1 3
2 5
5 6
6 7
6 3
2 7 1
Output:
No
*/