/*
6 6
0 1
1 5
0 4
0 3
3 4
2 4 
*/
#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    freopen("ICA-1-input.txt","r",stdin);
    int n,e;//node,edges;
    cin>>n>>e;
    vector<int> v[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);//when graph is directed, this is in comment
    }
    bool vis[n]={0};
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
        cout<<i<<nl;
        vis[i]=1;
        }
        for(auto it:v[i])
        {
            if(!vis[it])
            {
                cout<<it<<nl;
                vis[it]=1;
            }
        }
    }

}