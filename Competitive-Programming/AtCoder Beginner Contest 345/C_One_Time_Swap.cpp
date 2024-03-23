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
 string s;
 cin>>s;
 set<string>st;
 int cnt=0;
 for(int i=0;i<s.size();i++)
 {
    for(int j=i+1;j<s.size();j++)
    {
        
    }
 }
 for(auto it:st)
 {
    debug(it)
 }
 cout<<st.size();
}