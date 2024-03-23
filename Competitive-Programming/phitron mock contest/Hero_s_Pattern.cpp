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
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
    for(int j=n-1-1;j>=i;j--)
    {
        cout<<' ';
    }
    for(int j=n-1;j>=i;j--)
    {
        cout<<'*';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=n-1;j>=i;j--)
    {
        cout<<'*';
    }
    cout<<nl;
 }
for(int i=n-2;i>=0;i--)
 {
    for(int j=n-1-1;j>=i;j--)
    {
        cout<<' ';
    }
    for(int j=n-1;j>=i;j--)
    {
        cout<<'*';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=0;j<=i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<' ';
    }
    for(int j=n-1;j>=i;j--)
    {
        cout<<'*';
    }
    cout<<nl;
 }
 }
