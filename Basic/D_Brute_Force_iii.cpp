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
  while(ts--)
  {
    int n,mn=INT_MAX;
    deque<int>d;
    cin>>n;
    while(n--)
    {
        int tmp;
        cin>>tmp;
        d.push_back(tmp);
        mn=min(mn,tmp);
    }
    debug(mn)
    for(auto it:d)
    {
        debug(it)
    }
    int sum=0;
    debug(sum)
    for(auto it:d)
    {
        sum=sum+it-mn;
    }
    cout<<sum<<nl;
  }
}