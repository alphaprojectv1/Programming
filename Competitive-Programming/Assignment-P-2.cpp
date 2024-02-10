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
    int sum=0;
    for(int n=1;n!=10;n+=1)
    {
        sum+=n;
    }
    cout<<sum;
}