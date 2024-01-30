#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
class cmp
{
    public:
    bool operator()(int x,int y)
    {
        return x>y;
    }
};
int main()
{
    int ts=1;
    cin>>ts;
    while(ts--)
    {
        int n;
        cin>>n;
        priority_queue<int,vector<int>,cmp>pq,pq2;
        queue<int>q;
        while (n--)
        {
            int tmp;
            cin>>tmp;
            q.push(tmp);
            pq.push(tmp);
            pq2.push(tmp);
        }
        map<int,int>mp;
        while(!q.empty())
        {
            int tmp;
            cin>>tmp;
            mp[q.front()]=tmp;
            q.pop();
        }
        while(!pq.empty())
        {
            cout<<pq.top()<<blk;
            pq.pop();
        }
        cout<<nl;
        while(!pq2.empty())
        {
            cout<<mp[pq2.top()]<<blk;
            pq2.pop();
        }
        cout<<nl;

    }
}
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// int main()
// {
//     int ts;
//     cin>>ts;
//     while(ts--)
//     {
//         ll n;
//         cin>>n;
//         ll a[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         map<ll,ll>mp;
//         for(auto i:a)
//         {
//             int tmp;
//             cin>>tmp;
//             mp[i]=tmp;
//         }
//         sort(a,a+n);
//         for(auto i:a)
//         {
//             cout<<i<<blk;
//         }
//         cout<<nl;
//         for(auto i:a)
//         {
//             cout<<mp[i]<<blk;
//         }
//         cout<<nl;
//     }
// }