#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
const int INF=1e9;
vector<int>g(N);
ll vis[8][8],lev[8][8];
vector<pair<int,int>>mov={
{-1,2},{1,2},
{-1,-2},{1,-2},
{2,-1},{2,1},
{-2,-1},{-2,1}
};
int ki,kj,qi,qj;
bool valid(int x,int y)
{
    return x>=0 && y>=0 && x<8 && y<8;
}
// int getX(string s)
// {
//     return s[0]-'a';
// }
// int getY(string s)
// {
//     return s[1]-'1';
// }
int bfs(int srcX,int srcY,int desX,int desY)
{
    // int srcX=getX(src),
    // srcY=getY(src),
    // desX=getX(des),
    // desY=getY(des);
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    vis[srcX][srcY]=1;
    lev[srcX][srcY]=0;
    while(!q.empty())
    {
        pair<int,int>v=q.front();
        q.pop();
        int x=v.first,y=v.second;
        for(auto it:mov)
        {
            if(valid(it.first+x,it.second+y)
            && !vis[it.first+x][it.second+y])
            {
                q.push({x+it.first,y+it.second});
                lev[it.first+x][it.second+y]=lev[x][y]+1;
                vis[x+it.first][y+it.second]=1;
            }
        }
        if(lev[desX][desY]!=INF)
        {
            break;
        }
    }
    return lev[desX][desY];
}
void reset(){
    for(ll i=0;i<8;i++)
    {
        	for(ll j=0;j<8;j++)
            {
                lev[i][j]=INF;
                vis[i][j]=0;
            }
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        reset();
        //string s1,s2;
        cin>>ki>>kj>>qi>>qj;
        cout<<bfs(ki,kj,qi,qj)<<nl;
    }
}
