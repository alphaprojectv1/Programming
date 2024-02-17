#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define check(a) cout<<a;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
ll r,c,si,sj;
char a[1005][1005],par[1005][1005];
int mn=INT_MAX,cnt=0;
bool vis[1005][1005];
pair<int,int> d[4]={{0,1},{0,-1},{1,0},{-1,0}};
// bool valid(int x,int y)
// {
//     if(x<r && x>=0 && y<c && y>=0 && a[x][y]!='-')
//     {
//         return 1;
//     }
//     return 0;
// }
bool valid(int x,int y)
{
    if(x<0 || y<0 || x>=r || y>=c || a[x][y]=='-')
    {
        return false;
    }
    return true;
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    cnt++;
    for(int i=0;i<4;i++)
    {
        if(!valid(x+d[i].first,y+d[i].second) && !vis[x+d[i].first][y+d[i].second])
        {
            dfs(x+d[i].first,y+d[i].second);
        }
    }
}
int main()
{
    cin>>r>>c;
    for(ll i=0;i<r;i++)
    {
        for(ll j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.')
            {
                si=i,sj=j;
            }
            vis[i][j]=0;
            par[i][j]=0;
        }
    }
    // for(ll i=0;i<r;i++)
    // {
    //     for(ll j=0;j<c;j++)
    //     {
    //         cout<<a[i][j]<<blk;
    //     }
    //     cout<<nl;
    // }
    //bfs(si,sj);
    //dfs(si,sj);
    set<int>st;
    vector<int>rc;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='.' && !vis[i][j])
            {
                dfs(i,j);
                rc.push_back(cnt);
                st.insert(cnt);
                cnt=0;
            }
        }
    }
    cout<<rc.front();
    cout<<*st.begin();
    if(mn==INT_MAX)
    {
        cout<<-1;
        return 0;
    }
    cout<<mn;
}
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// char a[1005][1005];
// bool vis[1005][1005];
// pair<int,int> d[4]={{0,1},{0,-1},{1,0},{-1,0}};
// vector<int> rc;
// //int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
// int r,c,sum=0;
// bool valid(int x,int y)
// {
//     if(x<0 || y<0 || x>=r || y>=c || a[x][y]=='-')
//     {
//         return false;
//     }
//     return true;
// }
// void dfs(int si,int sj)
// {
//     vis[si][sj]=1;
//     //cout<<si<<blk<<sj<<nl;
//     sum++;
//     for(int i=0;i<4;i++)
//     {
//         int x=si+d[i].first,
//         y=sj+d[i].second;
//         if(valid(x,y) && !vis[x][y])
//         {
//                 dfs(x,y);
//         }
//     }
// }
// int main()
// {
//     cin>>r>>c;
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>a[i][j];
//             vis[i][j]=0;
//         }
//     }
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             if(a[i][j]=='.' && !vis[i][j])
//             {
//                 //sum++;
//                 dfs(i,j);
//                 rc.push_back(sum);
//                 sum=0;
//             }
//         }
//     }
//     if(rc.empty())
//     {
//         cout<<-1;
//         return 0;
//     }
//     sort(rc.begin(),rc.end());
//     cout<<rc.front();
// }