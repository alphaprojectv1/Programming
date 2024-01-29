#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
using namespace std;
const int N=1e5+5;
char a[1005][1005];
bool vis[1005][1005]={0};
pair<int,int> d[4]={{0,1},{0,-1},{1,0},{-1,0}};
vector<int> rc;
int r,c,di,dj,si,sj;
bool valid(int x,int y)
{
    if(x<0 || y<0 || x>=r || y>=c || a[x][y]=='#')
    {
        return false;
    }
    return true;
}
void dfs(int si,int sj)
{
    vis[si][sj]=1;
    for(int i=0;i<4;i++)
    {
        int x=si+d[i].first,
        y=sj+d[i].second;
        if(valid(x,y) && !vis[x][y])
        {
                dfs(x,y);
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
            if(a[i][j]=='A')
            {
                si=i,sj=j;
            }
            if(a[i][j]=='B')
            {
                di=i,dj=j;
            }
        }
    }
    dfs(si,sj);
    if(vis[di][dj])
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}