#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int r,c,vis[1005][1005],si,sj,di,dj;
pair<int,int> par[1005][1005],v[4]={{1,0},{-1,0},{0,-1},{0,1}};
char a[1005][1005];
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
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        int nx=pr.first,ny=pr.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int ci=nx+v[i].first,cj=ny+v[i].second;
            if(!valid(ci,cj))
            {
                q.push({ci,cj});
                vis[ci][cj]=1;
                par[ci][cj]={nx,ny};
            }
        }
    }
}
int32_t main()
{
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            vis[i][j]=1;
            par[i][j]={0,0};
            if(a[i][j]=='D')
            {
                si=i;
                sj=j;
            }
            if(a[i][j]=='R')
            {
                di=i;
                dj=j;
            }
        }
    }
    cout<<si<<sj;
    bfs(si,sj);
    if(!vis[di][dj])
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
    else
    {
        // pair<int,int>trk={di,dj};
        // while(trk.first!=si && trk.second!=sj)
        // {
        //     pair<int,int>tmp=par[si][sj];
        //     a[tmp.first][tmp.second]='X';
        //     trk=tmp;
        // }
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
