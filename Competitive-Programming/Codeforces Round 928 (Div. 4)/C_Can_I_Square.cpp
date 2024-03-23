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
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        sum+=tmp;
    }
    int s=sqrt(sum);
    if((s*s)==sum)
    {
        cout<<"YES"<<nl;
    
    }
    else
    {
        cout<<"NO"<<nl;
    }
 }
}