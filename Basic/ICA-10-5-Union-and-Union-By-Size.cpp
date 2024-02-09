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
using namespace std;
const int N=1e5+5;
int par[N];
void dsu_ini(int n)
{
   for(int i=0;i<n;i++)
   {
    par[i]=-1;
   }
}
int dsu_find(int node)
{
    if(par[node]==-1)
    {
        return node;
    }
    int leader=dsu_find(par[node]);
    return leader;
}
int main()
{
    int n;
    cin>>n;
    dsu_ini(n);
    cout<<dsu_find(2);
}