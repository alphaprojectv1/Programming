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
 int n,w;
 cin>>n>>w;
 vector<int>v;
 while (n--)
 {
    int tmp;
    cin>>tmp;
    v.push_back(tmp);
 }
 int i=0,j=v.size(),cnt=0;
 sort(v.begin(),v.end());
 while(i<j)
 {
     if(v[i]+v[j-1]<=w)
     {
        cnt++;
        i++;
        j--;
     }
     else
     {
        j--;
        cnt++;
     }
 }
 cout<<cnt;
}