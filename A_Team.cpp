#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    int ts,sum=0;
    cin>>ts;
    while(ts--)
    {
        int a[2]={0};
        for(int i=0;i<3;i++)
        {
            int tmp;
            cin>>tmp;
            a[tmp]++;
        }
        //cout<<a[1]<<blk;
        if(a[1]>=2)
        {
            sum++;
        }
    }
    cout<<sum;
}