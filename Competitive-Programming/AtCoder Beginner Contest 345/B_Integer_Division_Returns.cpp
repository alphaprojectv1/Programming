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
 int s;
 cin>>s;
 if(s%10)
 {
    if(s%10 < 0)
    {
        cout<<s/10;
    }
    else
    {

    cout<<s/10+1;
    
    }
 }
 else
 {
    cout<<s/10;
 }
}

