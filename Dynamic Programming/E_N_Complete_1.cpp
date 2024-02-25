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
 string s;
 cin>>s;
 int a[26]={0};
 for(auto it:s)
 {
    int tmp=(int)it;
    a[tmp-97]++;
 }
 for(int i=0;i<26;i++)
 {
    if(a[i]==1)
    {
        cout<<find(s.begin(),s.end(),(char)i+97)-s.begin()+1<<nl;
        return 0;
    }
 }
}