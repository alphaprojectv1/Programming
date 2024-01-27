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
    int v[n][n]={0};
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a][b]=1;
        v[b][a]=1;
    }
    if(v[1][2])
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}
/*
Input:
6 6
0 1
1 5
0 4
0 3
3 4
2 4 
Output:
No
*/