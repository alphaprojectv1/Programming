// // #include<bits/stdc++.h>
// // #include <stdio.h>
// // #define ll long long
// // #define nl "\n"
// // #define blk " "
// // #ifndef ONLINE_JUDGE
// // #define debug(a) cout<<#a<<blk<<a<<nl;
// // #else
// // #define debug(a)
// // #endif
// // using namespace std;
// // const int N=1e5+5;
// // ll binpow(ll x,ll y)
// // {
// //     if(y==0)
// //     {
// //         return 1;
// //     }
// //     ll res=1;
// //     while(y)
// //     {
// //         if(y&1)
// //         {
// //             res=res*x;
// //         }
// //         x*=x;
// //         y>>=1;
// //     }
// //     return res;
// // }
// // int main()
// // {
// //     cout<<binpow(2,2);
// // }
// // #include<bits/stdc++.h>
// // #define ll long long
// // #define nl "\n"
// // #define blk " "
// // using namespace std;
// // int main()
// // {
// //     int n;
// //         cin>>n;
// //         int a[1005]={0};//N=1e5+5
// //         a[0]=-10,a[1]=2;
// //         if(n==0)
// //         {
// //             cout<<a[0]<<nl;
// //         }
// //         if(n==1)
// //         {
// //             cout<<a[0]<<nl;
// //             cout<<a[1]<<nl;
// //         }
// //         else
// //         {
// //         cout<<a[0]<<nl;
// //         cout<<-a[1]+a[0]<<nl;
// //         for(int i=2;i<n;i++)
// //         {
// //             a[i]=a[i-1]*2;
// //             cout<<a[0]-a[i-1]*2<<nl;
// //         }
// //         }
// // }
// #include<bits/stdc++.h>
// #include <stdio.h>
// #define ll long long
// #define nl "\n"
// #define blk " "
// #ifndef ONLINE_JUDGE
// #define debug(a) cout<<#a<<blk<<a<<nl;
// #else
// #define debug(a)
// #endif
// const int N=1e5+5;
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n;
//     cout<<n<<blk;
//     while(1)
//     {
//         if(n==1)
//         {
//             break;
//         }
//         //m++;
//         if(n%2!=0)
//         {
//             n=(3*n)+2;
//             cout<<n<<blk;
//         }
//         else if(n%2==0)
//         {
//             n/=2;
//             cout<<n<<blk;
//         }
//         else if(n==1 || n==m)
//         {
//             break;
//         }
//     }
// }
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
const int N=1e5+5;
using namespace std;
int main()
{
    
}