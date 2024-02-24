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
    deque<int>d(n);
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    int fi=-1,li=-1,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(d[i]==1)
        {
            fi=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(d[i]==1)
        {
            li=i;
            break;
        }
    }
    debug(fi)
    debug(li)
    for(int i=fi;i<=li;i++)
    {
        if(d[i]==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<nl;
 }
}