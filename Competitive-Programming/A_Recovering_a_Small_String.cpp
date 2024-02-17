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
    vector<string>v(80,"frog");
        for(char i='a';i<='z';i++)
        {
            for(char j='a';j<='z';j++)
            {
                for(char k='a';k<='z';k++)
                {
                string ans;
                ans.push_back(i);
                ans.push_back(j);
                ans.push_back(k);
                ll val=i+j+k-(97*3);
                v[val]=(v[val]=="frog"?ans:v[val]);
                }
            }
        }
    ll ts;
    cin>>ts;
    while(ts--)
    {
        ll n;
        cin>>n;
        cout<<v[n-3]<<nl;
    }
}