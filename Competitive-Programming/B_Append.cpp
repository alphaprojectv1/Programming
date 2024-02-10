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
int main()
{
    int ts;
    cin>>ts;
    vector<int>v;
    while(ts--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        else if(op==2)
        {
            int tmp;
            cin>>tmp;
            cout<<v[v.size()-tmp]<<nl;
        }
    }
}