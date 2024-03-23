#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int n;
 cin>>n;
 int a[n],sum=0;
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    sum+=a[i];
 }
 if(sum%24==0)
 {
    cout<<sum;
 }
 else
 {
    cout<<24*((sum/24)+1)<<nl;
 }
 
}