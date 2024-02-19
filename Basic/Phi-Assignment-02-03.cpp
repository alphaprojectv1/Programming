#include<bits/stdc++.h>
#define int long long
#define nl endl
const int N=1e5+5;
using namespace std;
int r,c,vis[1005][1005],cnt=0;
pair<int,int> d[4]={{0,1},{0,-1},{1,0},{-1,0}};
char a[1005][1005];
bool valid(int x,int y)
{
	if(x>=0 && y>=0 && x<r && y<c && !vis[x][y] && a[x][y]!='-')
	{
		return 1;
	}
	return 0;
}
void dfs(int x,int y)
{
	vis[x][y]=1;
	cnt++;
	for(int i=0;i<4;i++)
	{
		int nx=x+d[i].first,ny=y+d[i].second;
		if(valid(nx,ny))
		{
			dfs(nx,ny);
		}
	}
}
int32_t main()
{
	//freopen("input.txt","r",stdin);
	cin>>r>>c;
	for(int i=0;i<r;i++)
 	{
 		for(int j=0;j<c;j++)
 		{
 			cin>>a[i][j];
 			vis[i][j]=0;
 		}
 	}
 	vector<int>v;
 	for(int i=0;i<r;i++)
 	{
 		for(int j=0;j<c;j++)
 		{
 			if(a[i][j]=='.' && !vis[i][j])
 			{
 			dfs(i,j);
 			v.push_back(cnt);
 			cnt=0;
 			}

 		}
 	}
 	if(v.empty())
 	{
 		cout<<-1<<nl;
 		return 0;
 	}
 	sort(v.begin(),v.end());
 	cout<<v[0];
}