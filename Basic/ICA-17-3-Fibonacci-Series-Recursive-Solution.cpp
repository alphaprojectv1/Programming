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
int fib(int n)/*time complexity 2^n*/
{
    if(n==0 || n==1)
    {
        return n;
    }
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int32_t main()
{
  int n;
  cin>>n;
  cout<<fib(n);
}
/**/