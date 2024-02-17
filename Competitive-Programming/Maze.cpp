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
const int N=1e5+5;
using namespace std;
int r,c,si,sj,di,dj;
pair<int,int> d[4]={{1,0},{-1,0},{0,-1},{0,1}};
//{{0,1},{0,-1},{-1,0},{1,0}};
pair<int,int> p[1005][1005];
bool vis[1005][1005];
char a[1005][1005];
int level[1005][1005];
bool valid(int x,int y)
{
    if(x>=0 && x<r && y>=0 && y<c && !vis[x][y] && a[x][y]!='#')
    {
        return 1;
    }
    return 0;
}
void bfs(int x,int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=1;
    level[x][y]=1;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int nx=pr.first,ny=pr.second;
        //a[nx][ny]='X';
        for(int i=0;i<4;i++)
        {
            int ci=nx+d[i].first,cj=ny+d[i].second;
            if(valid(ci,cj))
            {
                // if(ci==di && cj==dj)
                // {
                //     return;
                // }
                q.push({ci,cj});
                vis[ci][cj]=1;
                level[ci][cj]=level[x][y]+1;
                p[ci][cj]={nx,ny};
                //debug(level[ci][cj])
                // a[ci][cj]='X';
                // for(int i=0;i<r;i++)
                // {
                //   for(int j=0;j<c;j++)
                //  {
                //    cout<<a[i][j];
                //  }
                //    cout<<nl;
                // }
                // cout<<"----------"<<nl;
            }
        }
    }

}
int main()
{
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            vis[i][j]=0;
            level[i][j]=0;
            p[i][j]={0,0};
            if(a[i][j]=='D')
            {
                si=i,sj=j;
            }
            if(a[i][j]=='R')
            {
                di=i,dj=j;
            }
        }
    }
    bfs(si,sj);
    if(vis[di][dj])
    {
        //cout<<"YES"<<nl;
        pair<int,int>trace={di,dj},be={si,sj};
        while(trace!=be)
        {
        pair<int,int>tmp=p[trace.first][trace.second];
        a[tmp.first][tmp.second]='X';
        trace=tmp;
        }
        a[si][sj]='D';
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j];
        }
            cout<<nl;
        }
    }
    else
    {
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j];
        }
            cout<<nl;
        }
    }
        
}