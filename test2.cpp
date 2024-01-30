#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int fun(int x)
{
    int sum;
    while(x!=0)
    {
        sum=x%10;
        x/=10;
    }
    if(sum<10)
    {
        return sum;
    }
    else
    {
        fun(sum);
    }
}
int main()
{
    int n,sum=0;
    cin>>n;
    cout<<fun(n);
}