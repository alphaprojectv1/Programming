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
int a[N],n;
void set_(int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=-1;
    }
    a[0]=1;
    a[1]=3;
    a[2]=1;
    a[4]=2;
    a[5]=1;
}
int dsu_find(int node)
{
    if(a[node]==(-1))
    {
        return node;
    }
    int leader=dsu_find(a[node]);
    a[node]=leader;
    return leader;
}
int main()
{
    freopen("ICA-10.txt","r",stdin);
    int n;
    cin>>n;
    set_(n);
    for(int i=0;i<n;i++)
    {
        cout<<dsu_find(i)<<nl;
    }
    
}