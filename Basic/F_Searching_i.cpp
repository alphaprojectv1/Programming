#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 int n,q;
 cin>>n>>q;
 deque<int>d;
 while(n--)
 {
    int tmp;
    cin>>tmp;
    d.push_back(tmp);
 }
 sort(d.begin(),d.end());
 while(q--)
 {
    int tmp;
    cin>>tmp;
    int it=lower_bound(d.begin(),d.end(),tmp)-d.begin();
    if(it==0)
    {
        cout<<max(tmp,*(d.begin()+it))-min(tmp,*(d.begin()+it))<<nl;
        continue;
    }
    if(it!=n)
    {
        cout<<min((max(tmp,*(d.begin()+it-1))-min(tmp,*(d.begin()+it-1))),max(tmp,*(d.begin()+it))-min(tmp,*(d.begin()+it)))<<nl;
        continue;
    }
    cout<<max(tmp,*(d.begin()+d.size()-1))-min(tmp,*(d.begin()+d.size()-1))<<nl;
    
 }
}