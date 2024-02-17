#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt = 1;;
  cin >> tt;;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ptr = 0, ptr1 = n - 1;
    while (a[ptr] == a[0]) {
      ++ptr;
    }
    while (a[ptr1] == a[n - 1]) {
      --ptr1;
    }
    if (n == 1) {
      cout << 0 << '\n';
      continue;
    }
    if (a.front() != a.back()) {
      cout << min(n - ptr, ptr1 + 1)  << '\n';
      continue;
    }
    cout << max(0, ptr1 - ptr + 1) << '\n';
 }
  return 0;
}