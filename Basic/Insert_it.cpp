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
 int n,m;
 cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 cin>>m;
 vector<int>b(m);
 for(int i=0;i<m;i++)
 {
    cin>>b[i];
 }
 int pos;
 cin>>pos;
 for(int i=0;i<m;i++)
 {
    a.insert(a.begin()+pos+i,b[i]);
 }
 for(auto it:a)
 {
    cout<<it<<blk;
 }

}