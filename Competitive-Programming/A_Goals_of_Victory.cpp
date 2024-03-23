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
    int n,sum=0;
    cin>>n;
    deque<int>d(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>d[i];
        sum+=d[i];
    }
    cout<<(-1)*sum<<nl;
 }
}