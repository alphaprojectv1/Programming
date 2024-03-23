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
 //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 int ts;
 cin>>ts;
 set<int>v;
 while(ts--)
 {
    int op;
    cin>>op;
    if(op==1)
    {
        int tmp;
        cin>>tmp;
        v.insert(tmp);
    }
    else if(op==2)
    {
        if(!v.empty())
        {
            int t;
            for(auto it:v)
            {
                t=it;
                break; 
            }
            cout<<t<<nl;
            v.erase(t);
        }
        else
        {
            cout<<"empty"<<nl;
        }
    }
 }
}
