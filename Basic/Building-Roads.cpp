/*
https://cses.fi/problemset/task/1666
*/
#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int par[N],level[N];
void reset(int n)
{
    for(int i=0;i<=n;i++)
    {
        par[i]=-1;
        level[i]=0;
    }
}
int dsu_find(int node)
{
    if(par[node]==-1)
    {
        return node;
    }
    int leader=dsu_find(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2)
{
    int l1=dsu_find(node1),l2=dsu_find(node2);
    if(level[l1]>level[l2])
    {
        par[l2]=l1;
    }
    else if(level[l1]<level[l2])
    {
        par[l1]=l2;
    }
    else
    {
        par[l2]=l1;
        level[l2]++;
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    reset(n);
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        if(dsu_find(a)!=dsu_find(b))
        {
            dsu_union(a,b);
        }
    }
    set<int>st;
    for(int i=1;i<=n;i++)
    {
        st.insert(dsu_find(i));
    }
    vector<int>v;
    for(auto it:st)
    {
        v.push_back(it);
    }
    cout<<st.size()-1<<nl;
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<blk<<v[i+1]<<nl;
    }

}
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// int parent[N];
// int group_size[N];
// void dsu_initialize(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         parent[i] = -1;
//         group_size[i] = 1;
//     }
// }
// int dsu_find(int node)
// {
//     if (parent[node] == -1)
//         return node;
//     int leader = dsu_find(parent[node]);
//     parent[node] = leader;
//     return leader;
// }
// void dsu_union_by_size(int node1, int node2)
// {
//     int leaderA = dsu_find(node1);
//     int leaderB = dsu_find(node2);
//     if (group_size[leaderA] > group_size[leaderB])
//     {
//         parent[leaderB] = leaderA;
//         group_size[leaderA] += group_size[leaderB];
//     }
//     else
//     {
//         parent[leaderA] = leaderB;
//         group_size[leaderB] += group_size[leaderA];
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     dsu_initialize(n);
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         int leaderA = dsu_find(a);
//         int leaderB = dsu_find(b);
//         if (leaderA != leaderB)
//         {
//             dsu_union_by_size(a, b);
//         }
//     }
//     vector<int> leader;
//     for (int i = 1; i <= n; i++)
//     {
//         leader.push_back(dsu_find(i));
//     }
//     sort(leader.begin(), leader.end());
//     leader.erase(unique(leader.begin(), leader.end()), leader.end());
//     cout << leader.size() - 1 << endl;
//     for (int i = 0; i < leader.size() - 1; i++)
//     {
//         cout << leader[i] << " " << leader[i + 1] << endl;
//     }
//     return 0;
// }