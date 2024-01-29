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
0 0
1 1
4 1
2 1
3 2
5 2
6 3
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
int level[N]={0};
void bfs(int src);
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b),v[b].push_back(a);
    }
    int src;
    cin>>src;
    bfs(src);
}
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int pr=q.front();
        q.pop();
        cout<<pr<<blk<<level[pr]<<nl;
        vis[pr]=1;
        for(int i=0;i<v[pr].size();i++)
        {
            if(!vis[v[pr][i]])
            {
                q.push(v[pr][i]);
                vis[v[pr][i]]=1;
                level[v[pr][i]]=level[pr]+1;
            }
        }
    }
}