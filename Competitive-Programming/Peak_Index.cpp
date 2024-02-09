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
const int N=1e5+5;
int arr[N]={0};
int sol(int n)  
{  
    int i;  
    if(n == 1)  
    {  
        return 0;  
    }  
    if(arr[0] >= arr[1])  
    {  
        return 0;  
    }  
    if(arr[n - 1] >= arr[n - 2])  
    {  
        return n - 1;  
    }  
    for(i = 1; i < n - 1; i++)  
    {  
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])  
        {  
            return i;  
        }  
    }  
}  
int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        ll n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<sol(n)<<nl;
    }
}
