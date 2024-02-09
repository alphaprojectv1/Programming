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
// using namespace std;
// //const ll N=1e5+5;
// int main()
// {
//     vector<ll>v;
//     ll ts;
//     cin>>ts;
//     while(ts--)
//     {
//         ll op;
//         cin>>op;
//         if(op==1)
//         {
//             ll tmp;
//             cin>>tmp;
//             v.push_back(tmp);
//             sort(v.begin(),v.end());
//         }
//         else if(op==2)
//         {
//             if(v.size())
//             {
//             bool flag=0;
//             ll tmp;
//             for(auto i=0;i<v.size();i++)
//             {
//                 if(v[i]%2==0)
//                 {
//                     flag=1;
//                     tmp=v[i];
//                     v.erase(v.begin()+i);
//                     break;
//                 }
//             }
//             if(flag)
//             {
//                 cout<<tmp<<nl;
//             }
//             else
//             {
//                 cout<<"empty"<<nl;
//             }
//             sort(v.begin(),v.end());
//             }
//             else
//             {
//                 cout<<"empty"<<nl;
//             }
//         }
//         else if(op==3)
//         {
//             if(v.size())
//             {
//             bool flag=0;
//             ll tmp;
//             for(auto i=0;i<v.size();i++)
//             {
//                 if(v[i]%2!=0)
//                 {
//                     flag=1;
//                     tmp=v[i];
//                     v.erase(v.begin()+i);
//                     break;
//                 }
//             }
//             if(flag)
//             {
//                 cout<<tmp<<nl;
//             }
//             else
//             {
//                 cout<<"empty"<<nl;
//             }
//             sort(v.begin(),v.end());
//             }
//             else
//             {
//                 cout<<"empty";
//             }
//         }
//         // for(auto i:v)
//         // {
//         //     cout<<i<<blk;
//         // }
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
using namespace std;
const int N=1e5+5;
class cmp
{
    public:
    bool operator()(ll x,ll y)
    {
        return x>y;
    }
};
int main()
{
    int ts;
    cin>>ts;
    priority_queue<int,vector<int>,cmp>p,p1;
    while(ts--)
    {
        ll op;
        cin>>op;
        if(op==1)
        {
            ll tmp;
            cin>>tmp;
            if(tmp%2)
            {
                p.push(tmp);
            }
            else
            {
                p1.push(tmp);
            }
        }
        else if(op==2)
        {
            if(p1.empty())
            {
                cout<<"empty"<<nl;
            }
            else
            {
                cout<<p1.top()<<nl;
                p1.pop();
            }
        }
        else if(op==3)
        {
            if(p.empty())
            {
                cout<<"empty"<<nl;
            }
            else
            {
                cout<<p.top()<<nl;
                p.pop();
            }
        }

    }
}