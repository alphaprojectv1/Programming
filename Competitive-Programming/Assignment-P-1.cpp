//Assignment-P-1.cpp
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
int main()
{
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n-i;j++)
    {
        cout<<blk;
    }
    for(int k=1;k<=i;k++)
    {
        cout<<(char)(k+64);
    }
    for(int k=i-1;k>=1;k--)
    {
        cout<<(char)(k+64);
    }
    cout<<nl;
 }
 
}
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/