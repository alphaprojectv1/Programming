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
// bool check()
// {
//         ll k,x,n;
//         cin>>k>>x>>n;
//         int m= 1,flag=1,i=2;
//         while(i<=x)
//         {
//             int z=m/(k - 1);
//             while ((z * (k - 1))<m+1)
//             {
//                 z++;
//             }
//             m += z;
//             if (m>n+1)
//             {
//                 flag=0;
//             }
//             i++;
//         }
//         ll l=n-m,next =k*l;
//         if (next>n && flag)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
// }
// int main()
// {
//     ll ts;
//     cin >>ts;
//     while (ts--)
//     {
//         (check())?cout<<"YES"<<nl:cout<<"NO"<<nl;
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        int k, x, n;
        cin >> k >> x >> n;

        int loss = 1;
        bool f = true;
        for (int i = 2; i <= x; i++)
        {
            int z = loss / (k - 1);
            while ((z * (k - 1)) <= loss)
            {
                z++;
            }
            loss += z;
            if (loss >= n)
            {
                f = false;
            }
        }

        int left = n - loss;
        int after = k * left;
        if (after > n && f)
        {
            cout << "Yes" << endl;
            continue;
}
        else
        {
            cout << "No" << endl;
            continue;
}
}
}