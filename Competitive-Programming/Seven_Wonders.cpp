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
   string s;
   cin>>s;
   int cntt=0,cntc=0,cntg=0;
   for(auto it:s)
   {
        if(it=='T')
        {
            cntt++;
        }
        else if(it=='C')
        {
            cntc++;
        }
        else if(it=='G')
        {
            cntg++;
        }
   } 
   int mn=min(cntt,min(cntg,cntc));
   cout<<(cntt*cntt)+(cntg*cntg)+(cntc*cntc)+(7*mn);
}
