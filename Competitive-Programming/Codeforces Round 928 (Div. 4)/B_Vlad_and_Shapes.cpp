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
    string a[n];
    int cnt[n],s,d,flag1=0,flag2=0;
    for(int i=0;i<n;i++){cnt[i]=0;}
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        for(auto it:a[i])
        {
            if(it=='1')
            {
                if(!flag1)
                {
                    flag1=1;
                    s=i;
                }
                cnt[i]++;
                d=i;
            }
        }
        
    }
    int flag=1;
    for(int i=s;i<d;i++)
    {
        if(cnt[i]!=cnt[i+1])
        {
            flag=0;
        }
    }
    if(flag)
    {
        cout<<"SQUARE"<<nl;
    }
    else
    {
        cout<<"TRIANGLE"<<nl;
    }
 }
}