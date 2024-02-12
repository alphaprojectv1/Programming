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
    int t;
    cin >> t;
    while (t--)
    {
        int n,ans=1;
        cin >> n;
        vector<int>v;
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin>>tmp;
            s.insert(tmp);
        }
        for (auto x : s)
        {
            debug(x)
            v.push_back(x);
        }
        for (int i = 0; i <v.size(); i++)
        {
            int en =v[i]+n-1;
            int mx =upper_bound(v.begin(), v.end(),en)-v.begin()-i;
            ans = max(ans, mx);
            debug(ans)
        }
        cout <<ans<<nl;
    }
}