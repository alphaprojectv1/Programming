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
int ts,r,c,vis[1005][1005],cnt=0,si,sj;
char a[1005][1005];
pair<int,int> d[4]={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int x,int y)
{
    if(x>=0 && y>=0 && x<r && y<c && !vis[x][y] && a[x][y]!='#')
    {
        return 1;
    }
    return 0;
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    cnt++;
    for(int i=0;i<4;i++)
    {
        if(valid(x+d[i].first,y+d[i].second)){
           dfs(x+d[i].first,y+d[i].second);
        }
    }
}
int32_t main()
{
 cin>>ts;
 for(int i=1;i<=ts;i++)
 {
    cin>>c>>r;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            vis[i][j]=0;
            if(a[i][j]=='@')
            {
                si=i;
                sj=j;
            }
        }
    }
    dfs(si,sj);
    cout<<"Case "<<i<<": "<<cnt<<nl;
    cnt=0;
 }
}