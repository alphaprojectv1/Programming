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
int main() 
{ 
  //int tt = 1;; 
  int ts;
  cin >> ts;;
  while (ts--) 
  { 
    int n, m; 
    cin >> n >> m; 
    vector<int> a(n); 
    for (int i = 0; i < n; i++) 
    { 
      cin >> a[i]; 
    } 
    auto length = [&] (int p) 
    { 
      return int(log10(p) + 1); 
    }; 
    auto pad = [&] (int p) 
    { 
      int z = 1, r = 0; 
      while (p % (z *= 10) == 0) 
      { 
        ++r; 
      } 
      return r; 
    }; 
    sort(a.begin(), a.end(), [&] (int i, int j)
    { 
      return pad(i) < pad(j); 
    }); 
    int ans = 0; 
    for (int i = n - 1; i >= 0; i--) { 
      ans += length(a[i]); 
      if (i % 2 == (n - 1) % 2) { 
        ans -= pad(a[i]); 
      } 
    } 
    cout << (ans <= m ? "Anna" : "Sasha") << '\n'; 
  } 
  return 0; 
}