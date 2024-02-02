#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
typedef long long ll;
// #define ll long long
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int main()
{
    int a=1,b=2;
    a=++a+b+++a+b,b=a+b-- - --a-b--;
    cout<<a<<blk<<b;
    


}