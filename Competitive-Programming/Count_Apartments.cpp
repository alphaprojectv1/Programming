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
bool vis[1005][1005];
char adj[1005][1005];
int level[1005][1005];
int r,c,si,sj,di,dj,t=0;
vector<pair<int,int>>v={{1,0},{-1,0},{0,1},{0,-1}};
void reset()
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            adj[i][j]='#';
            vis[i][j]=0;
            level[i][j]=INFINITY;
        }
    }
}
bool valid(int x,int y)
{
    return x>=0 && x<r && y>=0 && y<c && !vis[x][y] && adj[x][y]!='#';
}
void bfs(int x,int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=1;
    level[x][y]=0;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int ci=pr.first,cj=pr.first;
        for(int i=0;i<4;i++)
        {
            int nx=ci+v[i].first,ny=cj+v[i].second;
            if(valid(nx,ny))
            {
                vis[nx][ny]=1;
                level[nx][ny]=level[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
    int new_x=x+v[i].first,new_y=y+v[i].second;
    if(valid(new_x,new_y))
    {
        dfs(new_x,new_y);
    }
    }
}
int main()
{
    reset();
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>adj[i][j];
            if(adj[i][j]=='A')
            {
                si=i,sj=j;
            }
            if(adj[i][j]=='B')
            {
                di=i,dj=j;
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(adj[i][j]=='.' && !vis[i][j])
            {
                t++;
                //bfs(i,j);
                dfs(i,j);
            }
        }
    }
    //debug(t);
    cout<<t;
}