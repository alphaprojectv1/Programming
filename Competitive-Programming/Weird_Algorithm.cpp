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
 int n;
 cin>>n;
 cout<<n<<blk;
 while(1)
 {
    if(n==1)
    {
        break;
    }
    if(n%2==0)
    {
        cout<<n/2<<blk;
        n/=2;
    }
    else if(n%2!=0)
    {
        cout<<(n*3)+1<<blk;
        n=(n*3)+1;
    }
 }
}