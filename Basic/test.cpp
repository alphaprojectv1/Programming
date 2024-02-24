// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // int neighborX[4] = {0, 0, 1, -1};
// // // // int neighborY[4] = {1, -1, 0, 0};
// // // // int n, m, answer = 0;
// // // // int vis[1010][1010];
// // // // char grid[1010][1010];
// // // // bool isValid (int y, int x) 
// // // // {
// // // //   if (y < 0) return false;
// // // //   if (x < 0) return false;
// // // //   if (y >= n) return false;
// // // //   if (x >= m) return false;
// // // //   if (grid[y][x] == '#') return false;
// // // //   return true;
// // // // }

// // // // void DFS (int y, int x) {
// // // //   vis[y][x] = 1;
// // // //   for (int i = 0 ; i < 4 ; i++) {
// // // //     int newX = x + neighborX[i];
// // // //     int newY = y + neighborY[i];
// // // //     if (isValid(newY, newX)) {
// // // //       if (!vis[newY][newX]) {
// // // //         DFS(newY, newX);
// // // //       }
// // // //     }
// // // //   }
// // // // }

// // // // int main() {
// // // //     cin >> n >> m;
// // // //     for (int i = 0 ; i < n ; i++) {
// // // //       for (int j = 0 ; j < m ; j++) {
// // // //         cin >> grid[i][j];
// // // //         vis[i][j] = 0;
// // // //       }
// // // //     }
// // // //     for (int i = 0 ; i < n ; i++) {
// // // //       for (int j = 0 ; j < m ; j++) {
// // // //         if (grid[i][j] == '.' && !vis[i][j]) {
// // // //           DFS(i, j);
// // // //           answer++;
// // // //         }
// // // //       }
// // // //     }
// // // //     cout << answer << endl;
// // // //     return 0;
// // // // }
// // // // #include<bits/stdc++.h>
// // // // #define nl "\n"
// // // // #define blk " "
// // // // typedef long long ll;
// // // // // #define ll long long
// // // // using namespace std;
// // // // const int N=1e5+5;
// // // // int main()
// // // // {
// // // //   string s;
// // // //   cin>>s;
// // // //   int c[26]={0};
// // // //   for(auto i:s)
// // // //   {
// // // //     //cout<<i<<blk;
// // // //     int j=(int)i;
// // // //     //cout<<j<<blk;
// // // //     c[j-65]++;
// // // //   }
// // // //   if(s.size()!=4 || c[s[0]-65]!=2 ||c[s[1]-65]!=2 || c[s[2]-65]!=2 || c[s[3]-65]!=2 )
// // // //   {
// // // //     cout<<"No";
// // // //   }
// // // //   else 
// // // //   {
// // // //     cout<<"Yes";
// // // //   }
// // // // }
// // // // #include<bits/stdc++.h>
// // // // #define nl "\n"
// // // // #define blk " "
// // // // typedef long long ll;
// // // // // #define ll long long
// // // // using namespace std;
// // // // const int N=1e5+5;
// // // // int fun(int n) 
// // // // {
// // // //   int sum=0;
// // // //   while(n!=0)
// // // //   {
// // // //     sum=sum+n%10;
// // // //     n/=10;
// // // //   }
// // // //   if(sum>=10)
// // // //   {
// // // //     return fun(sum);
// // // //   }
// // // //   else
// // // //   {
// // // //     return sum;
// // // //   }
// // // // }
// // // // int main() 
// // // // {
// // // //    int x;
// // // //    cin>>x;
// // // //    cout<<fun(x)<<nl;
// // // // }
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // class Edge
// // // // {
// // // // public:
// // // //     int u, v, c;
// // // //     Edge(int u, int v, int c)
// // // //     {
// // // //         this->u = u;
// // // //         this->v = v;
// // // //         this->c = c;
// // // //     }
// // // // };
// // // // const int N = 1e5 + 5;
// // // // int dis[N];
// // // // int main()
// // // // {
// // // //   //freopen("ICA-7.txt","r",stdin);
// // // //     int n, e;
// // // //     cin >> n >> e;
// // // //     vector<Edge> EdgeList;
// // // //     while (e--)
// // // //     {
// // // //         int u, v, c;
// // // //         cin >> u >> v >> c;
// // // //         EdgeList.push_back(Edge(u, v, c));
// // // //     }
// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         dis[i] = INT_MAX;
// // // //     }
// // // //     dis[0] = 0;
// // // //     for (int i = 1; i <= n - 1; i++)
// // // //     {
// // // //         for (Edge ed : EdgeList)
// // // //         {
// // // //             int u, v, c;
// // // //             u = ed.u;
// // // //             v = ed.v;
// // // //             c = ed.c;
// // // //             if (dis[u] < INT_MAX && dis[u] + c < dis[v])
// // // //             {
// // // //                 dis[v] = dis[u] + c;
// // // //             }
// // // //         }
// // // //     }
// // // //     bool cycle = false;
// // // //     for (Edge ed : EdgeList)
// // // //     {
// // // //         int u, v, c;
// // // //         u = ed.u;
// // // //         v = ed.v;
// // // //         c = ed.c;
// // // //         if (dis[u] < INT_MAX && dis[u] + c < dis[v])
// // // //         {
// // // //             cycle = true;
// // // //             break;
// // // //         }
// // // //     }
// // // //     if (cycle)
// // // //     {
// // // //         cout << "Cycle found. No answer" << endl;
// // // //     }
// // // //     else
// // // //     {
// // // //         for (int i = 0; i < n; i++)
// // // //             cout << i << " -> " << dis[i] << endl;
// // // //     }
// // // //     return 0;
// // // // }
// // // #include<bits/stdc++.h>
// // // #include <stdio.h>
// // // #define ll long long
// // // #define nl "\n"
// // // #define blk " "
// // // #ifndef ONLINE_JUDGE
// // // #define debug(a) cout<<#a<<blk<<a<<nl;
// // // #else
// // // #define debug(a)
// // // #endif
// // // const int N=1e5+5;
// // // using namespace std;
// // // int main()
// // // {
// // //     int sum=0;
// // //     for(int i=1;i!=10;i+=2)
// // //     {
// // //         sum+=i;
// // //     }
// // //     cout<<sum;
// // // }
// // // #include<bits/stdc++.h>
// // // #include <stdio.h>
// // // #define ll long long
// // // #define nl "\n"
// // // #define blk " "
// // // #ifndef ONLINE_JUDGE
// // // #define debug(a) cout<<#a<<blk<<a<<nl;
// // // #else
// // // #define debug(a)
// // // #endif
// // // const int N=1e5+5;
// // // using namespace std;
// // // int main()
// // // {
// // //     int cnt=0;
// // //     for(int i=1;i<=100;i++)
// // //     {
// // //         if(i%2!=0 && i%3!=0)
// // //         {
// // //             cout<<i<<blk;
// // //             cnt++;
// // //             //continue;
// // //         }
// // //     }
// // //     cout<<cnt;
// // // }
// // /*
// // Write a program to print all integers that are not divisible by either 2 or 3 and lie between 1 and 100.Program should also account the number of such integers and print the result.
// // */
// // #include<stdio.h>
// // int main()
// // {
// //     int a[6]={0};
// //     a[0]=-10,a[1]=2;
// //     for(int i=0;i<6;i++)
// //     {
// //         if(i==0)
// //         {
// //             printf("%d",a[i]);
// //         }
// //         else if(i==1)
// //         {
// //             printf(" %d",a[i-1]-a[i]);
// //         }
// //         else
// //         {
// //             a[i]=a[i-1]*2;
// //             printf(" %d",a[0]-a[i-1]*2);
// //         }

// //     }
// // }
// #include <bits/stdc++.h>
// #define int long long
// #define nl endl
// #define blk " "
// const int N=1e5+5;
// using namespace std;
// int n,e,cnt=0,path[N];
// vector<int> v[N];
// bool vis[N];
// void reset(int n)
// {
// 	for(int i=0;i<=n;i++)
// 	{
// 		vis[i]=0;
// 		path[i]=0;
// 	}
// }
// void bfs(int src)
// {
// 	queue<int>q;
// 	q.push(src);
// 	vis[src]=1;
// 	while(!q.empty())
// 	{
// 		int pr=q.front();
// 		q.pop();
// 		for(auto it:v[pr])
// 		{
// 			if(vis[it] && it!=path[src])
// 			{
// 				cnt++;
// 			}
// 			if(!vis[it])
// 			{
// 				q.push(it);
//                 path[it]=pr;
//                 vis[it];
// 			}
// 		}

// 	}
// }
// void dfs(int src)
// {
// 	vis[src]=1;
// 	for(auto it:v[src])
// 	{
// 		if(vis[it] && path[src]!=it)
// 		{
// 			cnt++;
// 		}
// 		if(!vis[it])
// 		{
// 			path[it]=src;
// 			dfs(it);
// 		}
// 	}
// }
// int32_t main()
// {
//    //freopen("input.txt","r",stdin);
//    cin>>n>>e;
//    reset(n);
//    while(e--)
//    {
//    		int a,b;
//    		cin>>a>>b;
//    		v[a].push_back(b);
//    		v[b].push_back(a);
//    }
//    dfs(1);
//    cout<<cnt;
// }
// #include<bits/stdc++.h>
// #define nl endl
// #define blk " "
// #define int long long
// const int N=1e5+5;
// using namespace std;
// int n,e;
// class Edge{
// public:
// 	int a,b,c;
// 	Edge(int a,int b,int c)
// 	{
// 		this->a=a;
// 		this->b=b;
// 		this->c=c;
// 	}
// };
// int32_t main()
// {
// 	cin>>n>>e;
// 	vector<int>v;
// 	while(e--)
// 	{
// 		int a,b,c;
// 		cin>>a>>b>>c;
// 		v.push_back({a,b,c});
// 	}
// 	for(auto it:v)
// 	{
// 		cout<<it.a<<blk<<it.b<<blk<<it.c<<nl;
// 	}
// }
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
int fact(int n)
{
	int ans=n;
	if(n==1)
	{
		return 1;
	}
	ans*=fact(n-1);
	return ans;
}
int32_t main()
{
  int n;
  cin>>n;
  cout<<fact(n);
}