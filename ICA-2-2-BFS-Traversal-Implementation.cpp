/*
Input:
7 8
0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
0
Output:
0
1
4
2
3
5
6
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
void bfs(int src);
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
    int src;
    cin>>src;
    bfs(src);
}
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty())
    {
        int par=q.front();
        cout<<par<<nl;
        q.pop();
        for(int i=0;i<v[par].size();i++)
        {
            if(!vis[v[par][i]])
            {
                q.push(v[par][i]);
                vis[v[par][i]]=1;
            }
        }

    }
}
