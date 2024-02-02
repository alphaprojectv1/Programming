#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    int m,n,a;
    cin>>m>>n>>a;
    if(m==1 && n==a && a==1)
    {
        cout<<1;
        return 0;
    }
    cout<<(m-a)*(n-a);
}