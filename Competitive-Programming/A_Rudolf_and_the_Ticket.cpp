#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    int a,b,c;
    cin>>a>>b>>c;
    deque<int>d(a+1),e(b+1);
    d[0]=0;
    for(int i=1;i<=a;i++)cin>>d[i];
    for(int i=1;i<=b;i++)cin>>e[i];
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(d[i]+e[j]<=c)
            {
                d[0]++;
            }
        }
    }
    cout<<d[0]<<nl;
 }
}