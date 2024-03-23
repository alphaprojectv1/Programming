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
    float n,d;
    cin>>n>>d;
    float r=0,nr=0;
    while(n--)
    {
        int tmp;
        cin>>tmp;
        if(tmp>=80 || tmp<=9)
        {
            nr++;
            continue;
        }
        r++;
    }
    int d1=ceil(r/d)+ceil(nr/d);
    cout<<d1<<nl;
 }
}