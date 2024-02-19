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
    int ts;
    cin>>ts;
    while(ts--)
    {
        int n;
        cin>>n;
        deque<int>d(n);
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        int cur=d[0];
        for(int i=1;i<n;i++)
        {
            if(d[i]>cur)
            {
                cur=max(d[i],cur);
                continue;
            }
                int tmp=d[i],j=2;
                for(int j=2;tmp<=cur;j++)
                {
                    tmp=d[i]*j;
                }
                cur=tmp;
            
        }
        cout<<cur<<nl;
    }
}