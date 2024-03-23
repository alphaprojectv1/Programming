#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 int n,q;
 cin>>n>>q;
 vector<int>v,u;v.push_back(0);
 set<int>st;
 while(n--)
 {
    int tmp;
    cin>>tmp;
    v.push_back(tmp);
 }
 while(q--)
 {
    int op;
    cin>>op;
    if(op==1)
    {
        int val,p;
        cin>>val>>p;
        v[val]=p;
    }
    else if(op==2)
    {
        int i,j;
        cin>>i>>j;
        if(i==j)
        {
            cout<<0<<nl;
            continue;
        }
        set<int>st;
        vector<int>tmp1;
        for(int k=i;k<=j;k++)
        {
            st.insert(v[k]);
            tmp1.push_back(v[k]);
        }
        vector<int>tmp;
        for(auto it:st)
        {
            tmp.push_back(it);
        }
        sort(tmp.begin(),tmp.end(),greater<int>());
        cout<<count(tmp1.begin(),tmp1.end(),tmp[1])<<nl;
    }
 }
}