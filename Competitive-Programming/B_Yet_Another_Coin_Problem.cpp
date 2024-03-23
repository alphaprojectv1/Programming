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
int32_t main() {
    int ts;
    cin>>ts;
    while(ts--)
    {
    int n,res;
    cin >> n;
    res=n;
    for (int i=0;i<=4;i++) 
    {
        for (int j=0; j<=4;j++) 
        {
            for (int k=0;k<=4;k++) 
            {
                for (int l=0;l<=4;l++) 
                {
                    int tmp=0;
                    tmp+=i*10;
                    tmp+=l*1;
                    tmp+=k*3;
                    tmp+=j*6;
                    if (n-tmp>-1) 
                    {
                        if((n-tmp)%15==0)
                        {
                           res=min(res,i + j + k + l +(n-tmp)/15);
                        }
                    }
                }
            }
        }
    }
    cout <<res<<nl;
    }
}
