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
 int n,q;
 cin>>n>>q;
 vector<int>a(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 while(q--)
 {
    int x;
    cin>>x;
    if(*lower_bound(a.begin(),a.end(),x)==x)
    {
        cout<<"found"<<nl;
    }
    else
    {
        cout<<"not found"<<nl;
    }
 }
}