#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int main()
{
    ll ts;
    cin>>ts;
    while(ts--)
    {
        int n;
        cin>>n;
        deque<ll>d(n);
        for(ll i=0;i<n;i++)
        {
          cin>>d[i];
        }

        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
        mp[d[i]+(i+1)]++;
        }
        for(int i=0;i<n;i++)
        {
         auto[x,y]=*(--mp.end()); 
         mp.erase(--mp.end());
         if((i==n))
         {
            cout<<x<<nl;
         }
         else 
         {
            cout<<x<<blk;
         }
         if(y>=2)
         {
           mp[x-1]+=(y-1);
           continue;
         } 
         else
         {
            continue;
         }
        }
      cout<<nl;
}
}