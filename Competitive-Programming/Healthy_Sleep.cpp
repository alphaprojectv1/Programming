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
  int ts;
  cin>>ts;
  if(ts>8)
  {
    cout<<"MORE"<<nl;
  } 
  else if(ts<8)
  {
    cout<<"LESS"<<nl;
  }
  else 
  {
    cout<<"PERFECT"<<nl;
  }
}
