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
 int mn=INT_MAX,res=1,a[n];
 for(int i=0;i<n;i++)
 {
    int tmp;
    cin>>tmp;
    a[i]=tmp;
    mn=min(mn,abs(tmp));
 }
 if(find(a,a+n,0)!=a+n)
 {
    cout<<0;
    return 0;
 }
 int i=0;
 if(mn>0)
 {
 for(;mn!=0;i++)
 {
    mn--;
 }
 }
 else if(mn<0)
 {
 for(;mn!=0;i++)
 {
    mn++;
 }
 }
 cout<<i;
}