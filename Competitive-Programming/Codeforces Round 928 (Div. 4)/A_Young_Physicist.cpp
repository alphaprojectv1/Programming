#include<bits/stdc++.h>
#include <stdio.h>
#define int int
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
class Edge
{
    public:
    int a,b,c;
};
int32_t main()
{
 int ts;
 cin>>ts;
 int x=0,y=0,z=0;
 vector<Edge>v(ts);
 for(int i=0;i<ts;i++)
 {
    int a,b,c;
    cin>>v[i].a>>v[i].b>>v[i].c;
 }
 for(int i=0;i<ts;i++)
 {
    x+=v[i].a,y+=v[i].b,z+=v[i].c;
 }
 if(x!=0 || y!=0 || z!=0)
 {
    cout<<"NO";
 }
 else
 {
    cout<<"YES";
 }
}