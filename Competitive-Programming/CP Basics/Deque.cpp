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
    deque<int>d;
    d.push_back(10);
    d.push_back(30);
    d.push_front(0);
    d.push_back(40);
    cout<<d.size()<<nl;
    for(auto i:d)
    {
        cout<<i<<blk;
    }
}