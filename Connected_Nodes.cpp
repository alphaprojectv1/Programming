#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
int main()
{
    int n,e;
    cin>>n>>e;
    priority_queue<int> v[N];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push(b);
        v[b].push(a);
    }
    int ts;
    cin>>ts;
    while(ts--)
    {
        int tmp;
        cin>>tmp;
        if(v[tmp].empty())
        {
            cout<<-1;
        }
        else
        {
        while(!v[tmp].empty())
        {
            cout<<v[tmp].top()<<blk;
            v[tmp].pop();
        }
        }
        cout<<nl;
    }
}







