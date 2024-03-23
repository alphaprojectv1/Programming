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
const int N=1e6+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 string a,b;
 while(cin>>a>>b)
 {
    map<char,int>mp,np;
    for(auto it:a)
    {
        mp[it]++;
    }
    bool flag=1;
    for(auto it:b)
    {
        np[it]++;
    }
    for(auto it=np.begin();it!=np.end();it++)
    {
        if(it->second>mp[it->first])
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Possible"<<nl;
    }
    else
    {
        cout<<"Impossible"<<nl;
    }
 }
}