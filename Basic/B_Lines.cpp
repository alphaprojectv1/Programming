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
int n,vis[1005][1005],si,sj,di,dj;
char a[1005][1005];
pair<int,int> par[1005][1005],d[4]={{1,0},{0,-1},{-1,0},{0,1}};
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<n && !vis[x][y] && a[x][y]!='O')
    {
        return 1;
    }
    return 0;
}
void check(int x,int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=1;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=pr.first+d[i].first,ny=pr.second+d[i].second;
            if(valid(nx,ny))
            {
                q.push({nx,ny});
                vis[nx][ny]=1;
                par[nx][ny]={pr.first,pr.second};
            }
        }
    }
}
int32_t main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            vis[i][j]=0;
            if(a[i][j]=='X')
            {
                si=i,sj=j;
            }
            if(a[i][j]=='@')
            {
                di=i,dj=j;
            }
        }
    }
    check(si,sj);
    if(vis[di][dj])
    {
        cout<<"Y"<<nl;
        pair<int,int>track={di,dj},be={si,sj};
        while(track!=be)
        {
            pair<int,int>tmp=par[track.first][track.second];
            a[tmp.first][tmp.second]='+';
            track=tmp;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j];
            }
            cout<<nl;
        }
    }
    else
    {
        cout<<"N"<<nl;
    }
}