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
    int op;
    cin>>op;
    if(op==1)
    {
        for(int i=1;i<=32;i*=2)
        {
            debug(i);
        }
    }
    else if(op==2)
    {
        for(int i=1;i<=243;i*=3)
        {
            debug(i);
        }
    }
    else if(op==3)
    {
        for(int i=-4;i<=4;i+=2)
        {
            debug(i);
        }
    }
    else if(op==4)
    {
        int n;
        cin>>n;
        int a[N]={0};//N=1e5+5
        a[0]=-10,a[1]=2;
        if(n==0)
        {
            cout<<a[0]<<nl;
        }
        if(n==1)
        {
            cout<<a[0]<<nl;
            cout<<a[1]<<nl;
        }
        else
        {
        cout<<a[0]<<nl;
        cout<<-a[1]+a[0]<<nl;
        for(int i=2;i<n;i++)
        {
            a[i]=a[i-1]*2;
            cout<<a[0]-a[i-1]*2<<nl;
        }
        }
    }
}
/*
write a for statement to print each of following sequeces of integer:
-1,-12,-14,-18,-26,-42
*/