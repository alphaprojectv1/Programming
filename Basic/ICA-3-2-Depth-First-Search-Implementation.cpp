#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
vector<int> v[N];
bool vis[N];
void dfs(int src)
{
    cout<<src<<nl;
    vis[src]=true;
    for(auto i:v[src])
    {
        if(vis[i]==false)
        {
            dfs(i);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);//when graph is directed this is in comment.
    }
    memset(vis,false,sizeof(vis));
    dfs(0);
    //cout<<"Hello";
}
