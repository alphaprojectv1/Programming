/*
Question:

Input:
5 8
########
#.A#...#
#.##.#B#
#......#
########
Output:
Yes
*/
#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<a<<nl;
#else
#define debug(a)
#endif
using namespace std;
const int N=1e5+5;
char adj[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>v={{1,0},{-1,0},{0,1},{0,-1}};
int r,c,si,sj,di,dj;
void reset()
{
    for(int i=0;i<1005;i++)
    {
        for(int j=0;j<1005;j++)
        {
            adj[i][j]='#';
            vis[i][j]=0;
        }
    }
}
bool valid(int x,int y)
{
    if(x<0 || x>=r || y<0 || y>=c || vis[x][y] || adj[x][y]=='#')
    {
        return false;
    }
    return true;
}
// bool valid(int x,int y)
// {
//    return !vis[x][y] && adj[x][y]!='#' && x>=0 && x<r && y>=0 && y<c;
// }
void bfs(int ci,int cj)
{
    queue<pair<int,int>>q;
    q.push({ci,cj});
    vis[ci][cj]=1;
    while(!q.empty())
    {
        pair<int,int>pr=q.front();
        q.pop();
        int iki=pr.first,ikj=pr.second; 
        for(int i=0;i<4;i++)
        {
            //debug(v[i].first);
            //debug(v[i].second);
            int ki=iki+v[i].first;
            int kj=ikj+v[i].second;
            //debug(ki)
            //debug(kj)
            if(valid(ki,kj))
            {
                q.push({ki,kj});
                vis[ki][kj]=1;
            }
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
                si=i;
                sj=j;
            }
            if(adj[i][j]=='B')
            {
                di=i;
                dj=j;
            }
        }
    }
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         //debug(adj[i][j])
    //     }
    //     cout<<nl;
    // }
    //debug(si);
    //debug(sj);
    //debug(di);
    //debug(dj);
    bfs(si,sj);
    if(vis[di][dj])
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}