#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
vector<int> v[N];
bool vis[N];
int n,e;
void dfs(int src)
{
    cout<<src<<blk;
    vis[src]=1;
    for(int i=0;i<v[src].size();i++)
    {
        if(!vis[v[src][i]])
        {
            dfs(v[src][i]);
            vis[v[src][i]]=1;
        }
    }
}
int main()
{
    freopen("DFS.txt","r",stdin);
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin>>src;
    dfs(src);
}