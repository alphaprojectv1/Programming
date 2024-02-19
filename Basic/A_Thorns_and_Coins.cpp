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
        string s;
        cin>>n;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*' && s[i+1]=='*')
            {
                break;
            }
            else if(s[i]=='@')
            {
                cnt++;
            }
        }
        cout<<cnt<<nl;
    }
}