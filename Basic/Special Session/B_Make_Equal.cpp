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
    int n;cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int tmp=ceil((float)sum/(float)n);
    sum/=n;
    if(tmp!=sum)
    {
        cout<<"NO"<<nl;
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=sum)
        {
            flag=1;
        }
    }
        if(flag)
        {
            break;
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i+1] && a[i+1]<sum)
            {
                a[i-1]-=1;
                a[i]+=1;
                flag=0;
            }
        }
        if(flag)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
 }