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
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum1=0,sum2=0,cnt=0;
        if(n==0)
        {
            cout<<0<<nl;
        }
        else if(n==1)
        {
            cout<<1<<nl;
        }
        else
        {
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                //cout<<a[j]<<blk;
                sum1+=a[j];
            }
            //cout<<nl;
            for(int k=i+1;k<n;k++)
            {
                //cout<<a[k]<<blk;
                sum2+=a[k];
            }
            //cout<<nl;
            if(sum1==sum2)
            {
                cnt++;
                //break;
            }
            sum1=0,sum2=0;
        }
        cout<<cnt<<nl;
        }
    }
}
// #include<bits/stdc++.h>
// #define int long long
// #define float double
// #define endl '\n'
// using namespace std;
// int32_t main ()
// {
// int t;cin>>t;
//while(t--)
// {
// int n;
// cin>>n;
// int ar[n];
// for(int i=0;i<n;i++) 
//{
// cin>>ar[i];
// }
// int pre[n];
// pre[0]=ar[0];
// for(int i=1;i<n;i++) 
//{
// pre[i]=pre[i-1]+ar[i];
// }
// int cnt = 0;
// for(int i=1;i<n-1;i++) 
//{
// if(pre[i-1]==pre[n-1]-pre[i]) 
//{
// cnt++;
// }
// }
// cout<<cnt<<endl;
// }
// return 0;
// }