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
 int tmp=n,res=0;
 while(tmp!=0)
 {
    res=res+(tmp%10)*10;
    tmp/=10;
 }
 if(res==n)
 {
    cout<<"YES";
 }
 else
 {
    cout<<"NO";
 }
 
}