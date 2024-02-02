#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
ll vis[105][105],level[105][105];
ll ts,r,c,si,sj,di,dj;
pair<int,int> mov[8]={
    {2,-1},{2,1},
    {-2,-1},{-2,1},
    {1,2},{1,-2},
    {-1,2},{-1,-2}
};
bool valid(ll x,ll y)
{
    return x>=0 && x<r && y>=0 && y<c && !vis[x][y];
}
void bfs(ll i,ll j)
{
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j]=1;
    level[i][j]=0;
    while(!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        ll x=p.first,y=p.second;
        for(int k=0;k<8;k++)
        {
            ll newx=x+mov[k].first,newy=y+mov[k].second;
            if(valid(newx,newy))
            {
                q.push({newx,newy});
                vis[newx][newy]=1;
                level[newx][newy]=level[x][y]+1;
            }
        }
    }
}
int main()
{
    cin>>ts;
    while(ts--)
    {
        for(int i=0;i<105;i++)
        {
            for(int j=0;j<105;j++)
            {
                vis[i][j]=0,level[i][j]=0;
                //cout<<vis[i][j]<<level[i][j]<<blk;
            }
            //cout<<nl;
        }
        cin>>r>>c>>si>>sj>>di>>dj;
        bfs(si,sj);
        if(vis[di][dj])
        {
            cout<<level[di][dj]<<nl;
        }
        else
        {
            cout<<-1<<nl;
        }
    }
}