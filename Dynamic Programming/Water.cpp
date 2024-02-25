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
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n;
    cin>>n;
    vector<int>v1(n),v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        v2[i]=v1[i];
    }
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    int x=find(v2.begin(),v2.end(),v1[0])-v2.begin(),
    y=find(v2.begin(),v2.end(),v1[1])-v2.begin();
    cout<<min(x,y)<<blk<<max(x,y)<<nl;
 }
}