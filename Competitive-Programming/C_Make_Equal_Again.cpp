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
  int tt = 1;;
  cin >> tt;;
  while (tt--) 
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
      cin >> a[i];
    }
    int a1=0,a2= n - 1;
    while (a[a1] == a[0]) 
    {
      ++a1;
    }
    while (a[a2] == a[n - 1]) 
    {
      --a2;
    }
    if (n==1) 
    {
      cout <<0<<nl;
    }
    else if (a.front() != a.back()) 
    {
      cout << min(n -a1, a2 + 1)<<nl;
    }
    else
    {
        cout << max(0, a1 - a2 + 1)<<nl;
    }
 }
  return 0;
}