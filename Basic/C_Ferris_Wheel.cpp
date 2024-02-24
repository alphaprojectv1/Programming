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
int n,w,ans=0,ans1;
deque<int>d;

int32_t main()
{
  int n,w;
  cin>>n>>w;
  while(n--)
  {
    int tmp;
    cin>>tmp;
    d.push_back(tmp);
  }
  sort(d.begin(),d.end());
  int i=0,j=d.size();
  while(i<j)
  {
    if(d[i]+d[j-1]<=w)
    {
        ans++;
        i++;
        j--;
        continue;
    }
        ans++;
        j--;
  }
  cout<<ans;
}