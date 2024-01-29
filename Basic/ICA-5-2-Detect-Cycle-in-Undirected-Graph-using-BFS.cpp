/*
Input:
4 4
0 1
1 2
2 3
3 1
Output:

*/
#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
vector<int> v[N];
bool vis[N]={0};
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty())
    {
        int pr=q.front();
        q.pop();
        cout<<pr<<blk;
        for(int i=0;i<v[pr].size();i++)
        {
            if(!vis[v[pr][i]])
            {
            q.push(v[pr][i]);
            vis[v[pr][i]]=1;
            }
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
        v[b].push_back(a);
    }
    //bfs(0);
    for(int i=0;i<n;i++)
    {
        bfs(i);
        cout<<nl;
    }
}