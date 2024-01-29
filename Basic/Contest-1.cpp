//Solution E:
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// int main()
// {
//   string s;
//   cin>>s;
//   int c[26]={0};
//   for(auto i:s)
//   {
//     //cout<<i<<blk;
//     int j=(int)i;
//     //cout<<j<<blk;
//     c[j-65]++;
//   }
//   if(s.size()!=4 || c[s[0]-65]!=2 ||c[s[1]-65]!=2 || c[s[2]-65]!=2 || c[s[3]-65]!=2 )
//   {
//     cout<<"No";
//   }
//   else 
//   {
//     cout<<"Yes";
//   }
// }
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// int main()
// {
//     bool c[26]={0};
//     string s;//="msfg";
//     cin>>s;
//     for(auto i:s)
//     {
//         int j=(int)i;
//         c[j-97]=1;
//     }
//     //cout<<(int)'k'<<blk<<c[100];
//     if(c[(int)'k'-97] && c[(int)'e'-97] && c[(int)'y'-97] && c[(int)'e'-97] && c[(int)'n'-97]
//     && c[(int)'c'-97] && c[(int)'e'-97])
//     {
//         cout<<"Yes";
//     }
//     else
//     {
//         cout<<"No";
//     }
// }
//Solution D:
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// int main()
// {
//     //freopen("input.txt","r",stdin);
//     string s/*="keyence"*/,first="key",second="ence";
//     cin>>s;
//     if(s[0]!='k' || s[s.size()-1]!='e')
//     {
//         cout<<"NO";
//     }
//     else if(s.find(first)!=-1 && s.find(-1))
//     {
//         cout<<"YES";
//     }
//     else 
//     {
//         cout<<"NO";
//     }
// }
//// https://vjudge.net/contest/544183/544165/544173/544169?fbclid=IwAR2NL9y9xfD8oreO4OhhYbJRWL51ueIyGHxKY6j-GEa-XJGLKn856yYTlOA#problem/D
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// int main()
// {
//     int n;
//     cin>>n;
//     if(n==0)
//     {
//         cout<<2;
//         return 0;
//     }
//     if(n==1)
//     {
//         cout<<1;
//         return 0;
//     }
//     ll sum[n];
//     sum[0]=2;
//     sum[1]=1;
//     for(int i=2;i<=n;i++)
//     {
//         sum[i]=sum[i-1]+sum[i-2];
//     }
//     cout<<sum[n];
// }