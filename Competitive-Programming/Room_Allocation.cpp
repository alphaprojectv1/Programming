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
    int n,cnt=0;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if(t%2==0)
        {
            cnt+=(t/2);
        }
        else
        {
            cnt=cnt+(t/2)+(t%2);
        }
    } 
    cout<<cnt<<nl;
    cnt=0;
}
}