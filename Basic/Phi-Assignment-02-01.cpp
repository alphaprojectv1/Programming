#include<bits/stdc++.h>
#define blk " "
#define int long long
#define nl endl
const int N=1e5+5;
using namespace std;
int n,e,cnt=0,path[N],vis[N];
vector<int> v[N];
void reset(int n)
{
	for(int i=0;i<n;i++)
	{
		path[i]=0;
		vis[i]=0;

	}
}
void dfs(int src)
{
	vis[src]=1;
	for(auto it:v[src])
	{
		if(vis[it] && path[src]!=it)
		{
			cnt++;
		}
		if(!vis[it])
		{
			
			path[it]=src;
			vis[it]=1;
			dfs(it);

		}
	}
}
int32_t main()
{
	freopen("input.txt","r",stdin);
	cin>>n>>e;
	reset(n);
	while(e--)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	cout<<cnt/2<<nl;
	
} 
/*
Saasha and Ana want to try make a highway among e cities.They want to connect n roads. Now, you have to make a programme how many roads are repeated.
Note: Duplicate edges as input can not be possible. The value of nodes are from 1 to n.

*/