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
 int n;cin>>n;
 char a[n][n];
  for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        a[i][j]=' ';
    }
 }
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(i==0)
        {
            a[i][j]=j+'1';
        }
        if(j==0)
        {
            a[i][j]=i+'1';
        }
        if(i==n-1)
        {
            a[i][j]=n+'0';
        }
        if(j==n-1)
        {
            a[i][j]=n+'0';
        }
    }
 }
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j];
    }
    cout<<nl;
 }
}