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
 int r=(n*2)-1,c=(n*2)-1;
 char a[r][c]={' '};
 int k=1,l=1;
 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
        a[i][j]=' ';
    }
 }
 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
        if(i==j)
        {
            a[i][i]=(char)k+'0';
            k++;
            if(k==3)
            {
                k=0;
            }
        }
        if((i+j)==(r-1))
        {
            a[i][j]=(char)l+'0';
            l++;
            if(l==3)
            {
                l=0;
            }
        }
        // else
        // {
        //     a[i][j]=' ';
        // }
    }
 }
 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
        cout<<a[i][j];
    }
    cout<<nl;
 }
}