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
const int N=1e5+5;
int main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int)
    }
    if(n<=2)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j,n;j++)
            {
                cout<<a[i][j];
            }
            cout<<nl;
        }
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==n)
            {
                a[i][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<nl;
    }

}