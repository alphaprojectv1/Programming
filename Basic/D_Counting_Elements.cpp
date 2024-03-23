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
int32_t main()
{
 int n;cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 int cnt=0;
 for(int i=0;i<n;i++)
 {
    if(find(a.begin(),a.end(),a[i]+1)!=a.end())
    {
        cnt++;
    }
 }
 cout<<cnt;
}