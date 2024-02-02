// https://www.spoj.com/problems/TDPRIMES/
#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e8;
vector<ll>v;
bool flag=1;
void prime(int x)
{
    if(x==N)
    {
        return;
    }
    for(ll j=2;j*j<=x;j++)
        {
            if(x%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            v.push_back(x);
        }
        flag=1;
    prime(x+1);

}
int main()
{
    prime(2);
    for(ll k=0;k<v.size();)
    {
        cout<<v[k]<<nl;
        k=k+100;
    }
}