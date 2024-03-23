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
vector<int> v[N];
int32_t main()
{
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        int tmp;
        cin>>tmp;
        if(tmp==1)
        {
            cout<<j<<blk;
        }
    }
    cout<<nl;
 }
}