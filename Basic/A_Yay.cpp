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
    a[(int)it-97]++;
 }
 int tmp;
 for(int i=0;i<26;i++)
 {
    if(a[i]==1)
    {
        tmp=i+97;
        break;
    }
 }
 auto it=find(s.begin(),s.end(),(char)tmp);
 cout<<it-s.begin()+1;
}