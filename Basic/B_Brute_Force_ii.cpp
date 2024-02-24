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
    while(n--)
    {
        int tmp;
        cin>>tmp;
        sum+=tmp;
    }
    int tmp=sqrt(sum);
    if(tmp*tmp==sum)
    {
        cout<<"YES"<<nl;
        continue;
    }
    cout<<"NO"<<nl;
 }
}