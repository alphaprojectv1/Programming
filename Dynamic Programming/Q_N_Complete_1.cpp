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
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        int tmp;
        cin>>tmp;
        sum+=tmp;
    }
    int root=sqrt(sum);
    if(root*root==sum)
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
 }
}