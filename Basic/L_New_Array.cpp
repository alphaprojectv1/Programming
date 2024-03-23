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
 int n;
 cin>>n;
 vector<int>a(n),b(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
    cin>>b[i];
 }
 for(auto it:b)
 {
    cout<<it<<blk;
 }
 for(auto it:a)
 {
    cout<<it<<blk;
 }


}