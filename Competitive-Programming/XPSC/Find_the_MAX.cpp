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
const int N=1e18+5;
using namespace std;
class cmp
{
    public:
    bool operator()(pair<int,int>x,pair<int,int>y)
    {
        if(x.second<y.second)
        {
            return x>y;
        }
        else if(x.first<y.first)
        {
            return x>y;
        }
    }
};
bool Cmp(pair<int,int>x,pair<int,int>y)
{
    if(x.second<y.second)
        {
            return x>y;
        }
        else if(x.first<y.first)
        {
            return x>y;
        }
}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0);
 int ts;
 cin>>ts;
 map<int,int>mp;
 set<pair<int,int>>st;
 while(ts--)
 {
    int op;
    cin>>op;
    sort(st.begin(),st.end(),Cmp);
    if(op==1)
    {
        int tmp;
        cin>>tmp;
        mp.insert({tmp,mp[tmp]++});
        st.insert({tmp,mp[tmp]});
    }
    else if(op==2)
    {
        if(!mp.empty())
        {
            int mx=INT_MIN,t=INT_MIN;
            for(auto it=mp.rbegin();it!=mp.rend();it++)
            {
                if(mx<it->second)
                {
                    mx=it->second,t=it->first;
                }
            }
            cout<<t<<nl;
            mp.erase(t);
        }
        else
        {
            cout<<"empty"<<nl;
        }
    }
 }
}
