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
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<"TRIANGULO:"<<blk<<fixed<<setprecision(3)<<a*c/2<<nl;
    cout<<"CIRCULO:"<<blk<<fixed<<setprecision(3)<<3.14159*c*c<<nl;
    cout<<"TRAPEZIO:"<<blk<<fixed<<setprecision(3)<<(a+b)*c/2<<nl;
    cout<<"QUADRADO:"<<blk<<fixed<<setprecision(3)<<b*b<<nl;
    cout<<"RETANGULO:"<<blk<<fixed<<setprecision(3)<<a*b<<nl;

}