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
    int x,y,z;
    cin>>x>>y>>z;
    if(x!=y)
    {
        int t=1,k=z;
        deque<int>d;
        d.push_back(0);
        int i=1;
        while(z%x==0 && z>0)
        {
            d.push_back(t);
            z/=x;
            t++;i++;
        }
        int ans=0,tp=1;
        map<int,int>mp;
        int tp1;
        for(auto it:d)
        {
            int tmp=z/t;
            mp[z/t]++;
            ans++;
            while(z%y==0 && z/t>0)
            {
                ans++;
    tmp=tmp/y;
    mp[tmp]++;
            }
            t*=x;
        }
        cout<<mp.size();
    }
    else
    {
        int ans=1;
        while(z%x==0 && z>=1)
        {
            z/=x;
            ans++;
        }
        cout<<ans<<nl;
    }
 }
}