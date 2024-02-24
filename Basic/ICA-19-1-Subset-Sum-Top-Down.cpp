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

int dp[1005][1005];
bool solve(int n,int s,int a1[])
{
    if(n==0)
    {
        if(s==0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    if(dp[n][s]!=-1)
    {
        return dp[n][s];
    }
    if(a1[n-1]<=s)
    {
        bool op1=solve(n-1,s-a1[n-1],a1);
        bool op2=solve(n-1,s,a1);
        return dp[n][s]=op1 || op2;
    }
    else
    {
        return dp[n][s]=solve(n-1,s,a1);
    }

}
int32_t main()
{
 int n,w;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 cin>>w;
 for(int i=0;i<=n;i++)
 {
    for(int j=0;j<=w;j++)
    {
        dp[i][j]=-1;
    }
 }
 if(solve(n,w,a))
 {
    cout<<"YES"<<nl;
 }
 else
 {
    cout<<"NO"<<nl;
 }
}

/*
4
1 2 4 6
7
*/
// #include <bits/stdc++.h>
// using namespace std;
// int dp[1005][1005];
// bool subset_sum(int n, int a[], int s)
// {
//     if (n == 0)
//     {
//         if (s == 0)
//             return true;
//         else
//             return false;
//     }
//     if (dp[n][s] != -1)
//         return dp[n][s];
//     if (a[n - 1] <= s)
//     {
//         bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
//         bool op2 = subset_sum(n - 1, a, s);
//         return dp[n][s] = op1 || op2;
//     }
//     else
//     {
//         return dp[n][s] = subset_sum(n - 1, a, s);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int s;
//     cin >> s;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= s; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }
//     if (subset_sum(n, a, s))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }