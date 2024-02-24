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
int ans=1,ts,n,m,x,y,l;
int solve(int n, int m, int x, int y, int l) 
{
    
    if (l==1) 
    {
        return n*m;
    } 
    int u= (x-1)/l,le= (y-1)/l,r= (m-y)/l,d=(n-x)/l;
    return (u+ d)*(le+ r)+(u+ d)+(le+ r)+1;
}

int32_t main() 
{
    cin>>ts;
    while (ts--) 
    {
        cin>>n>>m>>x>>y>>l;
        cout<<solve(n,m,x,y,l)<<nl;
    }

    return 0;
}
