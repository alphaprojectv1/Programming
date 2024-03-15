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
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","a",stdout);
  cout<<"*******************"<<nl;
  #endif
 int n,m;
 cin>>n>>m;
 vector<int>a(n),b(m),c(m+n);
 for(int i=0;i<n;i++)cin>>a[i];
 for(int j=0;j<m;j++)cin>>b[j];
 int i=0,j=0;
 while(i<n || j<m)
 {
    if(j==b.size() || i<a.size()  && a[i]<b[j])
    {
        c[i+j]=a[i];
        //c.push_back(a[i]);
        i++;
    }
    else
    {
        c[i+j]=b[j];
        //c.push_back(b[j]);
        j++;
    }
 }
 while(i<n)
 {
    c.push_back(a[i]);
    i++;
 }
 while (j<m)
 {
    c.push_back(b[j]);
    j++;
 }
 
 for(auto it:c)cout<<it<<blk;
 
}