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
// double fact(double x)
// {
//     double res=1;
//     while(x)
//     {
//         res*=x;
//         x--;
//     }
//     return res;
// }
int main()
{
 double n,dif,pre=0,cur=1,e=0;
 cin>>n;
 //cout<<fact(n)<<nl;
 for(int i=1;i<=n;i++)
 {
    double res=1,x=i;
    while(x)
    {
        res*=x;
        x--;
    }
    cur+=(1/res);
    res=1;
    //cur=cur+(1/fact(i));
    dif=cur-pre;
    if(dif<=0.00001)
    {
        break;
    }
    e=cur;
    pre=cur;
 }
 cout<<e;
}
/*
Write a program to compute the value of euler's number e,that is used as the base of natural logarithms.Use the flollowing formula.
e=1+1/1!+1/2!...1/n!
use a suitable loop construct. The loop must terminate when the difference between two sucessive valuse of e is less than 0.00001
*/
