#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#define YES cout<<"YES"<<nl;
#define NO  cout<<"NO"<<nl;
#define No cout<<"No"<<nl;
#define Yes cout<<"Yes"<<nl;
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int n;
bool solve(int ans)
{
    if(n<ans)
    {
        return 0;
    }
    else if(ans==n)
    {
        return ans;
    }
    else
    {
        return solve(ans*10) || solve(ans*20);
    }
}
int32_t main()
{
 int ts;
 cin>>ts;
 while(ts--)
 {
    cin>>n;
    if(solve(1))
    {
        YES
    }
    else
    {
        NO
    }
 }
}