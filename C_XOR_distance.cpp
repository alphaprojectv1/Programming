// // #include<bits/stdc++.h>
// // #define nl "\n"
// // #define blk " "
// // typedef long long ll;
// // // #define ll long long
// // using namespace std;
// // const int N=1e5+5;
// // int main()
// // {
// //     int ts;
// //     cin>>ts;
// //     while(ts--)
// //     {
// //         int a,b,c;
// //         cin>>a>>b>>c;
// //         if(a>b)
// //         {
// //             int t=a^b;
// //              a=t^a;
// //              b=t^b;
// //         }
// //         int n1=b-a,n2=0;
// //         for(int i=0;i<60;i++)
// //         {
// //             if((a^b)>>i & 1)
// //             {
// //                 if(n2+(1<<i)<=c)
// //                 {
// //                     if(0==(a>>i&1))
// //                     {
// //                         if(1<<(i+1) <=n1)
// //                         {
// //                             n2+=(1<<i);
// //                             n1-=(1<<(1+i));
// //                         }
// //                     }
// //                 }
// //             }
// //         }
// //         cout<<n1<<nl;
// //     }
// // }
#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
//typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int a,b,c;
signed main()
{
    //freopen("On.txt","r",stdin);
    int ts;
    cin>>ts;
    while(ts--)
    {
        
        cin>>a>>b>>c;
        if(a<b)
        {
            swap(a,b);
        }
        long long n1=a-b,n2=0,mn=n1;
        for(int i=60;i>=0;i--)
        {
            // if(((a^b)>>i & 1)&&(n2+(1<<i)<=c)&&(0==(a>>i&1))&&(1<<(i+1) <=n1))
            // {
            //     n1=n1-(1<<(1+i));
            //     n2=n2+(1<<i);
            // }
            if(((b>>i)&1)==0 && ((a>>i)&1)==1 && n2+(111ll<<i)<=c)
            {
                if(n1>=2*(111ll<<i))
                {
                    n2+=(111ll<<i);
                    n1-=2*(111ll<<i);
                }
                else
                {
                    mn=min(mn,2*(111ll<<i)-n1);
                }
            }
        }
        cout<<(min(n1,mn))<<nl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int a, b, c;

// signed main() {
// int t;
// cin >> t;
// while (t--) {
// cin >> a >> b >> c;
// if (a < b) swap(a, b);
// int ans = a - b, cnt = 0, mn = ans;
// for (int i = 60; i >= 0; i--) {
//  if (((b >> i) & 1) == 0 && ((a >> i) & 1) == 1 && cnt + (111LL << i) <= c) {
//  if (ans >= 2 * (111LL << i)) {
// cnt += (111LL << i);
//  ans -= 2 * (111LL << i);
//  } else {
//  mn = min(mn, 2 * (111LL << i) - ans);
//  }
//  }
//  }
//  cout << min(ans, mn) << "\n";
// }
//  return 0;
// }