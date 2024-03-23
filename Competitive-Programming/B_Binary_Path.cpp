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
string solve_(const string& f, const string& second)
 {
    int ln = f.size();
    string m(ln,122);
    string cur = f.substr(0,1);
    for (int i=1;i<ln;i++) 
    {
        if (f[i] > second[i - 1]) 
        {
            string an = cur + second.substr(i - 1);
            if (an < m) {
                m = an;
            }
        }
        cur += f[i];
    }
    cur += second[ln - 1];
    if (cur < m) 
    {
        m = cur;
    }
    return m;
}
int size_(const string& f, const string& second, const string& m) 
{
    int ln = f.length();
    string cur = f.substr(0, 1);
    int s_0 =1;
    for (int i=1;i<ln;i++) 
    {
        if (f[i] >= second[i - 1]) 
        {
            string an = cur + second.substr(i - 1);
            if (an == m) 
            {
                s_0++;
            }
        }
        cur += f[i];
    }
    cur += second[ln - 1];
    if (cur == m) 
    {
        s_0++;
    }
    return s_0-1;
}
int32_t main() 
{
    int ts;
    cin >>ts;
    while (ts--) 
    {
        int n;
        cin >> n;
        string s, second;
        cin >> s>> second;
        string m =solve_(s, second);
        int s_0 =size_(s, second, m);
        cout << m <<nl;
        cout << s_0<<nl;
    }
}
