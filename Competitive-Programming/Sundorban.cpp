/*https://school.outsbook.com/problems/problemdetails/10106*/
/*
Input:
5
SPPPP
TPTPP
TPPPP
PTETT
PTPTT
Output:
5
*/
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
int ts,par[30][30],vis[30][30],cnt,si,sj,di,dj;
char a[30][30];
pair<int,int> d[4]={{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int x,int y)
{
    if(x>=0 && x<ts && y>=0 && y<ts && a[x][y]!='T' && !vis[x][y])
    {
        return 1;
    }
    return 0;
}
void bfs(int x,int y)
{
    queue<pair <int,int> >q;
    q.push({x,y});
    par[x][y]=0;
    vis[x][y]=1;
    while (!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int nx=pr.first,ny=pr.second;
        for(int i=0;i<4;i++)
        {
            int ci=nx+d[i].first,cj=ny+d[i].second;
            if(valid(ci,cj))
            {
                q.push({ci,cj});
                vis[ci][cj]=1;
                par[ci][cj]=par[nx][ny]+1;
            }
        }
    }
    
}
int32_t main()
{
  while(cin>>ts)
  {
  for(int i=0;i<ts;i++)
  {
    for(int j=0;j<ts;j++)
    {
        cin>>a[i][j];
        vis[i][j]=0;
        par[i][j]=-1;
        if(a[i][j]=='S')
        {
            si=i,sj=j;
        }
        if(a[i][j]=='E')
        {
            di=i,dj=j;
        }
    }
  }
  //cout<<si<<nl<<sj<<nl<<di<<nl<<dj<<nl;
  bfs(si,sj);
  cout<<par[di][dj]<<nl;
  }
}
