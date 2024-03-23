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
    string a,b;
    int n,x,cnt=0,flag=0;
    cin>>n>>x;
    cin>>a>>b;
    for(int i=0;;i++)
    {
        if(i>10)
        {
            break;
        }
        if(a.find(b)!=-1)
        {
            flag=1;
            cnt=i;
            break;
        }
        a+=a;
    }
    if(flag)
    {
        cout<<cnt<<nl;
    }
    else
    {
        cout<<-1<<nl;
    }
    
 }
}