#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
char a[1005][1005];
int r,c,vis[1005][1005]={0},si,sj,di,dj;
pair<int,int> v[4]={{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int x,int y)
{
    return x>=0 && x<r && y>=0 && y<c && a[x][y]!='-';
}
void dfs(int ci,int cj)
{
    vis[ci][cj]=1;
    for(int i=0;i<4;i++)
    {
        int sci=ci+v[i].first,
        scj=cj+v[i].second;
        if(valid(sci,scj) && !vis[sci][scj])
        {
            dfs(sci,scj);
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
        }
    }
    cin>>si>>sj>>di>>dj;
    if(a[si][sj]!=a[di][dj]||a[si][sj]=='-'||a[di][dj]=='-')
    {
        cout<<"NO";
    }
    else
    {
        dfs(si,sj);
        //cout<<vis[si][sj]<<blk<<vis[di][dj]<<nl;
        (vis[di][dj])?cout<<"YES":cout<<"NO";
    }
}