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
    int a,b,c;
        cin>>a>>b>>c;
        if(b<c)
        {
            if(a<=b)
            {
                cout<<"Alice"<<nl;
                continue;
            }

                cout<<"Bob"<<nl;
                continue;

        }
        if(b==c)
        {
            if(a>b)
            {
                if((a-(b+1))%(b+1)==0)
                {
                    cout<<"Bob"<<nl;
                    continue;
                }
                
                cout<<"Alice"<<nl;
                continue;
            }
            cout<<"Alice"<<nl;
            continue;
            }
        cout<<"Alice"<<nl;
 }
}