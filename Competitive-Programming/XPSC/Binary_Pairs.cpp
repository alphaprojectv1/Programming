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
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    stack<int>st;
    for(auto it:s)
    {
        int tmp=it-'0';
        if(!st.empty() && tmp==1 && st.top()==0)
        {
            cnt++;
        }
        else if(!st.empty() && tmp==0 && st.top()==1)
        {
            cnt++;
        }
        st.push(tmp);
    }
    cout<<cnt<<nl;
 }
}