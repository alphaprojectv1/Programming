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
 ios_base::sync_with_stdio(0),cin.tie(0);
 int n,h,mx=INT_MIN;
 cin>>n>>h;
 vector<int>v(n+1);
 for(int i=1;i<=n;i++)
 {
    cin>>v[i];
    mx=max(v[i],mx);
 }
 mx--;
 int sum=mx*(mx+1);
 sum/=2;
 h-=sum;
 if(h>=1)
 {
    cout<<"Hablu"<<nl;
 }
 else
 {
    cout<<"Dablu"<<nl;
 }
}
