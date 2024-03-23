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
 string s,s1;
 cin>>s;
 int f,e;
 for(int i=0;i<s.size();i++)
 {
    if(s[i]=='|')
    {
        f=i;
        break;
    }
    s1.push_back(s[i]);
 }
 for(int i=f+1;i<s.size();i++)
 {
    if(s[i]=='|')
    {
        e=i;
        break;
    }
 }
 for(int i=e+1;i<s.size();i++)
 {
    s1.push_back(s[i]);
 }
 cout<<s1;
}