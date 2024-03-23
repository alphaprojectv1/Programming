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
 int ts;
 cin>>ts;
 while (ts--)
 {
    int n,cnt=0;
    cin>>n;
    string s,a="pie",b="map";
    cin>>s;
    for(int i=1;i<s.size()-1;i++)
    {
        if((s[i-1]=='p' && s[i]=='i' && s[i+1]=='e')||(s[i-1]=='m' && s[i]=='a' && s[i+1]=='p'))
        {
            cnt++;
            i+=2;
        }
    }
    cout<<cnt<<nl;
 }
}