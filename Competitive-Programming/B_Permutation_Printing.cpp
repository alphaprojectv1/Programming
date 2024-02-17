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
    cin >> ts;
    while (ts--)
    {
        int n;
        cin >> n;
        deque<int>d(n);
        for(int i=0;i<n;i++)
        {
            d[i]=i+1;
        }
        bool flag=1;
        auto x=d.begin(),y=d.end();
        for(;;)
        {
            if(x==y)
            {
                break;
            }
            if(flag)
            {
                cout<<*x<<blk;
                *x++;
            }
            else
            {
                cout<<*y<<blk;
                *y--;
            }
        }
        cout<<nl;
        
    }
    return 0;
}