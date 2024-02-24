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
  vector<int>v;
  int ts;
  cin>>ts;
  while(ts--)
  {
    string op;
    cin>>op;
    if(op=="ADD")
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
        sort(v.begin(),v.end());
    }
    else if(op=="ASK")
    {
        int x,y,z;
        cin>>x>>y>>z;
        int mx=max(x,max(y,z)),mn=min(x,min(y,z));
        5
        if(find(v.begin(),v.end(),mx)!=v.end())
        {
            cout<<x<<nl;
        }
        else if(find(v.begin(),v.end(),mn)!=v.end())
        {
            cout<<y<<nl;
        }
        else if(find(v.begin(),v.end(),z)!=v.end())
        {
            cout<<z<<nl;
        }
        else 
        {
            cout<<0<<nl;
        }
    }
  }
}