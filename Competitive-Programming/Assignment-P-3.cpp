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
        // int sum=-12,i=2;
        // cout<<-10<<blk<<sum<<blk;
        // // for(int i=2;sum<-50;i*=2)
        // // {
        // //     sum+=i;
        // //     cout<<sum<<blk;
        // // }
        // while(sum!=-50)
        // {
        //     i*=2;
        //     sum-=i;
        //     cout<<sum<<blk;
        // }
        for(int a=-10;a>=-10;)
        {
            cout<<a<<nl;
            for(a=-12;a>=-42;a-=x)
        }
    }
}