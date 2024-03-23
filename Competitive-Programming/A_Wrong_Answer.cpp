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
 int a,b,ar[9]={0,1,2,3,4,5,6,8,9};
 cin>>a>>b;
 for(int i=0;i<9;i++)
 {
    if((a+b)!=ar[i])
    {
        cout<<ar[i]<<nl;
        break;
    }
 }
}