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
bool cmp(int x,int y)
{
    return x>y;
}
int32_t main()
{
    // int ts;
    // cin>>ts;
    // while(ts--)
    {
        int n,e;
        cin>>n>>e;
        vector<int> v[n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int tmp;
                cin>>tmp;
                if(tmp==1)
                {
                    v[i].push_back(j);
                    //v[j].push_back(i);
                }
            }
        }
        bool vis[n+1]={0};
        int dis[n+1]={-1};
        queue<int>q;
        dis[e]=0;
        q.push(e);
        vis[e]=1;
        while(!q.empty())
        {
            int pr=q.front();
            q.pop();
            for(auto it:v[pr])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=1;
                    dis[it]=dis[pr]+1;
                }
            }
        }
        //sort(dis,dis+n,cmp);
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                cout<<-1<<blk;
                continue;
            }
            cout<<dis[i]<<blk;
        }
    }
}
