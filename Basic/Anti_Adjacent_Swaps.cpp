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
        vector<int>v,v1,v3;
        while(n--)
        {
            int tmp;
            cin>>tmp;
            v.push_back(tmp);
            v1.push_back(tmp);
            v3.push_back(tmp);
        }
        if(v.size()==2 && v[0]<v[1])
        {
            cout<<"YES"<<nl;
        }
        else if(v.size()>2)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }

    }
}