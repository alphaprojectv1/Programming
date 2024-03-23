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
    char c[10][10]={'.'};
    int a[6]={0};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>c[i][j];
            if(c[i][j]!='X')
            {
                continue;
            }
            if(i==0 ||j==0 || i==9 || j==9 )
            {
              a[1]++;
            }
            else if(((i==1 ||i==8) && j>=1 && j<=8) ||((j==1|| j==8) && i>=1 && i<=8))
            {
                a[2]++;
            }
            else if(((i==2 ||i==7) && j>=2 && j<=7) ||((j==2|| j==7) && i>=2 && i<=7))
            {
              a[3]++;
            }
            else if(((i==3 ||i==6) && j>=3 && j<=6) ||((j==3|| j==6) && i>=3 && i<=6))
            {
              a[4]++;
            }
            else 
            {
              a[5]++;
            }
        }
    }
    for(int i=1;i<6;i++)
    {
       a[0]+=(i*a[i]);
    }
    cout<<a[0]<<nl;
 }
}