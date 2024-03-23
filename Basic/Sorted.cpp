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
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
    cout<<"YES"<<nl;
    else
    cout<<"NO"<<nl;
 }
}