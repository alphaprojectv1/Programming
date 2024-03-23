#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#define sep cout<<"---------------"<<endl;
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int n,c;
 cin>>n>>c;
 int a[n],sum=0;
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
    int mx=max((a[i]*c)+sum,(a[i])+sum);
    debug(mx)
    sum+=mx;
 }
 cout<<sum;
 
}