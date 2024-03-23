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
 while(ts--)
 {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,res=0,mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            cnt++;
            mx=max(cnt,mx);
            continue;
        }
        cnt=0;
    }
    cout<<count(s.begin(),s.end(),'1')+max(mx,0LL)<<nl;
 }
}