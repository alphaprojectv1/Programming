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
 set<int>st;
 int n;
 cin>>n;
 while(n--)
 {
    int a;
    cin>>a;
    st.insert(a);
 }
 cout<<st.size();
}