#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int n;
 cin>>n;
 cout<<n;
 while(1)
 {
    if(n==1)
    {
        break;
    }
    else if(n%2!=0)
    {
       cout<<blk<<(3*n)+1<<blk;
    }
    else if(n%2==0)
    {
        cout<<n/2<<blk;
        n/=2;
    }
 }

 
}