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
    char a[3][3];
    int cnt[3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='A')
            {
                cnt[0]++;
            }
            if(a[i][j]=='B')
            {
                cnt[1]++;
            }
            if(a[i][j]=='C')
            {
                cnt[2]++;
            }
        }
    }
    if(cnt[0]==2)
    {
        cout<<'A'<<nl;
    }
    else if(cnt[1]==2)
    {
        cout<<'B'<<nl;
    }
    else if(cnt[2]==2)
    {
        cout<<'C'<<nl;
    }
 }
}