// #include<bits/stdc++.h>
// #include <stdio.h>
// #define int long long
// #define nl "\n"
// #define blk " "
// #ifndef ONLINE_JUDGE
// #define debug(a) cout<<#a<<blk<<a<<nl;
// #else
// #define debug(a)
// #endif
// const int N=1e5+5;
// using namespace std;
// int32_t main()
// {
//  int ts;
//  cin>>ts;
//  while(ts--)
//  {
//     int n;
//     cin>>n;
//     int a[n+1];
//     for(int i=1;i<=n;i++)
//     {
//         a[i]=i;
//     }
//     int cnt=0;
//     // for(int i=1;i<=n;i++)
//     // {
//     //     for(int j=1;j<=n;j++)
//     //     {
//     //         if(i==j)
//     //         {
//     //             continue;
//     //         }
//     //         cout<<a[i]<<blk<<a[j]<<blk<<cnt<<nl;
//     //         cnt+=min(a[i],a[j]);
//     //     }
//     // }
//     for(int i=1;i<=n;i++)
//     {
//         cnt+=min(a[i],a[i+1]);
//     }
//     cout<<cnt<<nl;
//     cout<<"----------"<<nl;
//  }
// }
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
    int ans=n/2;
    ans=ans*(ans+1);
    if(n%2!=0)
    {
        ans+=(n/2)+1;
    }
    cout<<ans<<nl;
 }
}