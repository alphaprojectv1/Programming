#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
char a[1005][1005];
bool vis[1005][1005];
pair<int,int> d[4]={{0,1},{0,-1},{1,0},{-1,0}};
vector<int> rc;
//int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
int r,c,sum=0;
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
    //cout<<si<<blk<<sj<<nl;
    sum++;
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
            vis[i][j]=0;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='.' && !vis[i][j])
            {
                //sum++;
                dfs(i,j);
                rc.push_back(sum);
                sum=0;
            }
        }
    }
    if(rc.empty())
    {
        cout<<0;
        return 0;
    }
    sort(rc.begin(),rc.end());
    // cout<<nl;
    for(auto i:rc)
    {
        cout<<i<<blk;
    }
    // cout<<sum;
}