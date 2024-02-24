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
const int N=1e18;
using namespace std;
int32_t main() 
{
 int ts;
 cin>>ts;
 while(ts--)
 {
  int n,pos=0,cnt=0;
  cin>>n;
  int i=31;
  while(i--)
  {
   if(n & (1<<i))
   {
    if(pos==0)
    {
        pos=i;
    }
    if(cnt==0 or cnt==2)
    {
        cnt++;
    }
   }
   else
   {
    if(cnt==1)
    {
        cnt=2;
    }
   }
  }
  if(cnt==3)
  {
  int cur=0,ans=N,j=pos;
  for(int j=pos;j>(-1);j--)
  {
   cur=cur+pow(2,j);
   if(cur>=n)
   {
    ans=min(ans,cur-n);
   }
  }
  cout<<ans<<endl;
    continue;
  }
  cout<<0<<endl;
 }
}