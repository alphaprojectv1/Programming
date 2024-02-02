#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        string s;cin>>s;
        if(s.size()<=10){cout<<s;}
        else
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1];
        }
        cout<<nl;
    }
}