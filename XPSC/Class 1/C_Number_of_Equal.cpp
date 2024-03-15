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
  vector<int>u(n),v(m);
  for(int i=0;i<n;i++)cin>>u[i];
  for(int i=0;i<m;i++)cin>>v[i];
  int ans=0;
  for(int i=0;i<n;i++)
  {
    //if(find(v.begin(),v.end(),u[i])!=v.end())
    {
      ans+=count(v.begin(),v.end(),u[i]);
    }
  }
  cout<<ans;
}