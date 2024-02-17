#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
signed main() 
{
  int ts;
  cin >> ts;
  while (ts--) 
  {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    map<int, map<int, int>> mp;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      //mp[a[i] % x][a[i] % y]++;
    }
    for(auto it:a)
    {
        mp[it%x][it%y]++;
    }
    auto complement = [&] (int p) 
    {
      return (x - (p % x)) % x;
    };
    int sum = 0;
    for (int &i : a) {
      sum += mp[complement(i)][i % y] - (i % x == complement(i));
    }
    cout<<(sum >> 1)<<nl;
  }
  return 0;
}